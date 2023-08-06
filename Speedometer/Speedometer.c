#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "LCD_1in28.h"
#include "QMI8658.h"
#include "DEV_Config.h"
#include "GUI_Paint.h"
#include "image.h"

extern struct image Background;
extern struct image Rabbit;
extern struct image Turtle;
extern struct image Panther;
extern struct image Speed_1;
extern struct image Speed_2;
extern struct image Speed_3;
extern struct image Speed_4;
extern struct image Speed_5;
extern struct image Speed_6;
extern struct image Speed_7;
extern struct image Speed_8;
extern struct image Speed_9;
extern struct image Speed_10;
extern struct image Speed_11;
extern struct image Speed_12;
extern struct image Speed_13;
extern struct image Speed_14;
extern struct image Speed_15;
extern struct image Speed_16;
extern struct image Speed_17;
extern struct image Speed_18;
extern struct image Speed_19;
extern struct image Speed_20;
extern struct image Speed_21;
extern struct image Speed_22;
extern struct image Speed_23;
extern struct image Speed_24;
extern struct image Speed_25;
extern struct image Speed_26;
extern struct image Speed_27;
extern struct image Speed_28;
extern struct image Speed_29;
extern struct image Speed_30;

struct image * speeds[30] = {
    &Speed_1,&Speed_2,&Speed_3,&Speed_4,&Speed_5,
    &Speed_6,&Speed_7,&Speed_8,&Speed_9,&Speed_10,
    &Speed_11,&Speed_12,&Speed_13,&Speed_14,&Speed_15,
    &Speed_16,&Speed_17,&Speed_18,&Speed_19,&Speed_20,
    &Speed_21,&Speed_22,&Speed_23,&Speed_24,&Speed_25,
    &Speed_26,&Speed_27,&Speed_28,&Speed_29,&Speed_30
};

void Blit(struct image *canvas, struct image *image, bool ignoreWhitePixels) {
    char *canvasWalk = (char*)canvas->pixels;
    char *imageWalk = (char*)image->pixels;
    int stride = (canvas->width-image->width)*2;
    canvasWalk+=(image->y*canvas->width*2)+image->x*2;
    for(int y=0;y<image->height;y++) {
        for(int x=0;x<image->width;x++) {
            UWORD colour = *imageWalk << 8 | *(imageWalk+1);
            if(ignoreWhitePixels && colour == WHITE) {
                //doing nothing
                canvasWalk+=2;
                imageWalk+=2;
            } else {
                *canvasWalk = *imageWalk;
                canvasWalk++;imageWalk++;
                *canvasWalk = *imageWalk;
                canvasWalk++;imageWalk++;
            }
        }
        canvasWalk+=stride;
    }
}

void RenderSpeed(struct image *canvas,int speed) {
    Blit(canvas,&Background,false);
    if(speed < 15) {
        Blit(canvas,&Turtle,true);
    } else if(speed < 22) {
        Blit(canvas,&Rabbit,true);
    } else {
        Blit(canvas,&Panther,true);
    }
    for(int i =0;i<30;i++) {
        if(i<speed) {
            Blit(canvas,speeds[i],true);
        }
    }
}

int main()
{
    stdio_init_all();

    DEV_Module_Init();
    LCD_1IN28_Init(HORIZONTAL);
    LCD_1IN28_Clear(WHITE);
    DEV_SET_PWM(60);
    UWORD *image = (UWORD*)malloc(LCD_1IN28_HEIGHT*LCD_1IN28_WIDTH*2);
    Paint_NewImage((UBYTE*)image, LCD_1IN28.WIDTH, LCD_1IN28.HEIGHT, 0, WHITE);
    Paint_SetScale(65);
    Paint_Clear(WHITE);
    Paint_SetRotate(ROTATE_0);
    Paint_Clear(WHITE);

    struct image canvas = {
        .width = LCD_1IN28_WIDTH,
        .height = LCD_1IN28_HEIGHT,
        .x = 0,
        .y = 0,
        .pixels = (const char*)image
    };
    int speed = 0;
    int direction = 1;
    while(true) {
        Paint_Clear(WHITE);
        RenderSpeed(&canvas,speed);
        LCD_1IN28_Display((UWORD*)image);

        speed+=direction;
        if(speed>30) {
            direction = -1;
        } if(speed<0) {
            speed = 0;
            direction = 1;
        }
        sleep_ms(1000);
    }

    return 0;
}
