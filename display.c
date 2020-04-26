#include "display.h"
#define WHITE 0xFFFF
#define RED 0xF800
#define GREEN 0x07E0
#define BLUE 0x001F

void display_time(int hours, int minutes, int seconds, pi_fraembuffer_t*dev){
	sense_fb_bitmap_t *bm=fb->bitmap;

	// Top and bottom of sigma
    for(int i=3; i<8; i++) {
        bm->pixel[i][0]=WHITE;
        bm->pixel[i][6]=RED;
    }
	   // Middle
    for(int i=4; i<7; i++) {
        bm->pixel[i][7-i]=GREEN;
        bm->pixel[i][i-1]=BLUE;
    }

}

