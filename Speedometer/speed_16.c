#include "image.h"

const char Speed_16_buffer[440]={
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,0x65,0xE7,
0x65,0xE7,0x65,0xE7,0x65,0xE7,0xFF,0xFF,
};
const struct image Speed_16 = {
  .width = 20,
  .height = 11,
  .pixels = Speed_16_buffer,
  .x = 120,
  .y = 5,
};
