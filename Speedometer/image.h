#ifndef IMAGE_H__
#define IMAGE_H__

struct image {
    int width;
    int height;
    int x;
    int y;
    const char *pixels;
};

#endif