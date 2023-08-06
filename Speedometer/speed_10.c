#include "image.h"

const char Speed_10_buffer[760]={
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
};
const struct image Speed_10 = {
  .width = 19,
  .height = 20,
  .pixels = Speed_10_buffer,
  .x = 27,
  .y = 38,
};
