/*
 *  plot.c
 *  
 *  Created by Fredrik Sandin on 20/08/12.
 */

#include "tga.h"
#include "interp1.h"
#include <math.h>
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)>(b)?(b):(a))

/*!
	Draw circle on image.
 
	\param image Image buffer of size width*height.
	\param width Width of image.
	\param height Height of image.
	\param x0 X-coordinate of circe centre.
	\param y0 Y-coordinate of circe centre.
	\param radius Radius of circle.
	\param color Color of circle.
*/
void draw_circle(PIXEL_RGB24 *image, int width, int height,
	int x0, int y0, int radius, const PIXEL_RGB24 *color) {
	
	double alpha; /* angle */
	int x,y,index;

	for(alpha=0; alpha<=2*M_PI; alpha+=0.5/radius) {
		
		x = x0 + radius*cos(alpha); /* x coordinate */
		y = y0 + radius*sin(alpha); /* y coordinate */
		
		if(x>=0 && x<width && y>=0 && y<height ) {
		
			index = x + width*y; /* index of pixel in buffer */
			
			copy_pixel(&image[index], color);
		}
	}
}

void draw_line(PIXEL_RGB24 *image, int width, int height, float x1, float y1,
               float x2, float y2, const PIXEL_RGB24 *color) {

    int length, i, index;
    float x[width], y[height], k, inc, y3[1] = {0};

    // Size check, change to [0,512] if outside
    (x1<0?x1=0:x1),(x2<2?x2=0:x2),(y1<0?y1=0:y1),(y2<0?y2=0:y2);
    (x1>width?x1=width:x1),(x2>width?x2=width:x2),(y1>width?y1=width:y1),(y2>width?(y2)=width:y2);

    x[0]=x1;
    x[1]=x2;
    y[0]=y1;
    y[1]=y2;

    // Print start point
    index = y[0] * width + x[0];
    copy_pixel(&image[index], color);
    // Print end point
    index = y[1] * width + x[1];
    copy_pixel(&image[index], color);


    // Check length of line
    length = lengthCheck(x1,x2,y1,y2);
    // Slope
    k = ((y2-y1) / (x2-x1));
    // Decide what direction the line is pointing in
    inc = increments(x1,x2,y1,y2);

    for ( i = 2; i < length; i++) {
         if (interp1(x,y,i,inc,y3) != 1) {
             if (x2 - x1 == 0) {      // Vertical line
                 x[i] = x[i - 1];
                 x[i - 1] = x1;
                 y[i] = y[i - 1];
                 if (y2 - y1 > 0) // Up
                     y[i - 1] = y[i - 2] + 1;  // Straight up
                 else if (y2 - y1 < 0) // Down
                     y[i - 1] = y[i - 2] - 1;  // Straight down
                 index = y[i - 1] * width + x[i - 1];
                 copy_pixel(&image[index], color);
             }

             }
             if (x2 - x1 != 0) { // The other lines
                 if (y2 - y1 == 0) { // Horizontal
                     x[i] = x[i - 1];
                     y[i] = y[i - 1];
                     y[i - 1] = y1;
                     if (x2 - x1 > 0) // Right
                         x[i - 1] = x[i - 2] + 1;
                     else if (x2 - x1 < 0) // Left
                         x[i - 1] = x[i - 2] - 1;
                     index = y[i - 1] * width + x[i - 1];
                     copy_pixel(&image[index], color);
                 }
                 if ((x2 - x1 != 0) && (y2 - y1 != 0)) {    // Angelegled
                     if (k >= -1 && k <= 1) { // x > y
                         interp1(x, y, i, inc, y3);
                         x[i] = x[i - 1];
                         x[i - 1] = inc;
                         y[i] = y[i - 1];
                         y[i - 1] = y3[0];
                         if ((x2 - x1) > 0)
                             inc++;
                         if ((x2 - x1) < 0)
                             inc--;
                         index = (int) y[i - 1] * width + x[i - 1];
                         copy_pixel(&image[index], color);
                     }
                     if (k > 1 || k < -1) {     // y > x
                         interp1(y, x, i, inc, y3);
                         x[i] = x[i - 1];
                         x[i - 1] = y3[0];
                         y[i] = y[i - 1];
                         y[i - 1] = inc;
                         if ((y2 - y1) > 0)
                             inc++;
                         if ((y2 - y1) < 0)
                             inc--;
                         index = (int) y[i - 1] * width + x[i - 1];
                         copy_pixel(&image[index], color);
                     }
                 }
             }
         }
    }

int main(void) {

	int width;
	int height;
	PIXEL_RGB24 *image,red,green,blue;

	red.R=255; red.G=0;     red.B=0;
	green.R=0; green.G=255; green.B=0;
	blue.R=0;  blue.G=0;    blue.B=255;

	if(tga_read("empty.tga",&width,&height,&image)!=TGA_OK) {
		goto error;
	}

	/* Draw a few circles on the image */
	draw_circle(image,width,height,width/2,height/2,120,&blue);
	draw_circle(image,width,height,width/2,height/2,240,&blue);
	draw_circle(image,width,height,width/2,height/2,20,&blue);

	/* Draw a few lines on the image */
    draw_line(image,width,height,256,236,256,136,&red);       // Vertical
    draw_line(image,width,height,256,276,256,376,&red);       // Vertical
    draw_line(image,width,height,276,256,376,256,&red);       // Vertical
    draw_line(image,width,height,236,256,136,256,&red);       // Vertical
    draw_line(image,width,height,50,136,462,136,&green);        // Horizontal
    draw_line(image,width,height,50,136,256,495,&green);        // 45 degrees
    draw_line(image,width,height,462,136,256,495,&green);        // 45 degrees

    // OOB test
    draw_line(image,width,height,-50,-50,600,600,&red);
    draw_line(image,width,height,-50,600,600,-50,&red);


	if(tga_write("circle.tga",width,height,image,24)!=TGA_OK) {
		goto error_free;
	}
exit:
	free(image); /* Free memory allocated by tga_read() */
	return 0;
	
error_free:
	free(image);
	
error:
	return -1;	
}

/* EOF */