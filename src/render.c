#include "render.h"
#include <stdint.h>
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define BLUE 0xFF0000

uint32_t pixels[SCREEN_HEIGHT * SCREEN_WIDTH];

void drawLine(int x, int lineHeight, int colour) {
    lineHeight = (lineHeight > SCREEN_HEIGHT ? SCREEN_HEIGHT : lineHeight);
    int y0 = SCREEN_HEIGHT - lineHeight / 2;
    int y1 = SCREEN_HEIGHT + lineHeight / 2;
    for (int i = y0; i < y1; i++) {
        pixels[i * SCREEN_WIDTH + x] = colour;
    }
}