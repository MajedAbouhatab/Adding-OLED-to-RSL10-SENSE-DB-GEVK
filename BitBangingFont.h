#include <BDK.h>

#define BUFFER_SIZE 64*128/8

uint8_t oled_buffer[BUFFER_SIZE];

uint8_t TextBuffer[40];

void BitBangingFont_Init(void);

void WriteBufferToDisplay(void);

void sd1306_draw_string(int32_t x, int32_t y, uint8_t* textptr, int32_t size);
