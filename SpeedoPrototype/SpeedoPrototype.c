#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "hardware/i2c.h"
#include "LCD_1in28.h"
#include "QMI8658.h"
#include "DEV_Config.h"
#include "GUI_Paint.h"

extern const char test_image[172800];

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
    
    LCD_1IN28_Display((UWORD*)test_image);
    return 0;
}
