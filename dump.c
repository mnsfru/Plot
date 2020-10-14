//// Ritar allt utom vertikala linjer
////
////void draw_line(PIXEL_RGB24 *image, int width, int height, float x0, float y0,
////               float x1, float y1, const PIXEL_RGB24 *color) {
////
//////    length = sqrt((xEnd-xStart)*(xEnd-xStart)+(yEnd-yStart)*(yEnd-yStart));
////
////    int length, i, imin, index;
////    float x[width], y[height], y2[1], x2, k;
////    length = sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
////
////    x[0]=x0;
////    x[1]=x1;
////    y[0]=y0;
////    y[1]=y1;
////
////
////    if (y1-y0 == 0)
////        k = 0, x2 = x0 + 1;
////    else if ( x1-x0 == 0)
////        k = 1, x2 = y0 + 1;
////    else {
////        k = (y1 - y0) / (x1 - x0);
////        x2 = x0 + 1;
////    }
////
////    printf("k = %f\n", k);
////
////    index = y[0] * width + x[0];
////    copy_pixel(&image[index], color);
////
////    index = y[1] * width + x[1];
////    copy_pixel(&image[index], color);
////
////    for ( i = 2; i <= 100; i++) {
////        if (interp1(x,y,i,x2,y2) != 100) {
////            x[i] = x[i - 1];
////            x[i - 1] = x2;
////            y[i] = y[i - 1];
////            y[i - 1] = y2[0];
////            printf("x[%i]=%.f  ", i, x[i]);
////
//////            x2++;
////
////            if ( k == 0 ) {
////                x2 = x[i - 1] + 1;
////                index = y[i - 1] * width + x[i - 1];
////            }
////            else if ( k == 1) {
////                x2 = y[i - 1] + 1;
////                index = y[i - 1] * width + y[i - 1];
////            }
////            else {
////                x2 = x[i - 1] + k;
////                index = y[i - 1] * width + x[i - 1];
////            }
////
////            printf("%i\n", index);
////            copy_pixel(&image[index], color);
////        }
////
////    }
////    printf("\n");
////}
////
//
//
//
//// Dump 2
//
///*
// *  plot.c
// *
// *  Created by Fredrik Sandin on 20/08/12.
// */
//
//#include "tga.h"
//#include "interp1.h"
//#include <math.h>
//
///*!
//	Draw circle on image.
//
//	\param image Image buffer of size width*height.
//	\param width Width of image.
//	\param height Height of image.
//	\param x0 X-coordinate of circe centre.
//	\param y0 Y-coordinate of circe centre.
//	\param radius Radius of circle.
//	\param color Color of circle.
//*/
//void draw_circle(PIXEL_RGB24 *image, int width, int height,
//                 int x0, int y0, int radius, const PIXEL_RGB24 *color) {
//
//    double alpha; /* angle */
//    int x,y,index;
//
//    for(alpha=0; alpha<=2*M_PI; alpha+=0.5/radius) {
//
//        x = x0 + radius*cos(alpha); /* x coordinate */
//        y = y0 + radius*sin(alpha); /* y coordinate */
//
//        if(x>=0 && x<width && y>=0 && y<height ) {
//
//            index = x + width*y; /* index of pixel in buffer */
//
//            copy_pixel(&image[index], color);
//        }
//    }
//}
//
//void draw_line(PIXEL_RGB24 *image, int width, int height, float x1, float y1,
//               float x2, float y2, const PIXEL_RGB24 *color) {
//
//    int length, i, imin, index, n;
//    float x[width], y[height];
//
//    x[0]=x1;
//    x[1]=x2;
//    y[0]=y1;
//    y[1]=y2;
//
//    index = y[0] * width + x[0];
//    copy_pixel(&image[index], color);
//
//    index = y[1] * width + x[1];
//    copy_pixel(&image[index], color);
//
//    // Check lenght of line
//    length = lengthCheck(x1,x2,y1,y2);
//
//
//    for ( i = 2; i < length; i++) {
//        if (interp1(x,y,i,x2,&y2) != 1) {
//            if (x2-x1 == 0) {      // Vertical line
//                if ( y2-y1 > 0 ) {// Up
//                    x[i] = x[i - 1];
//                    x[i - 1] = x1;
//                    y[i] = y[i - 1];
//                    y[i - 1] = y[i - 2] + 1;  // Straight up
//                    index = y[i - 1] * width + x[i - 1];
//                    printf("x[%i]=%.f  y[%i]=%.f   index = %i \n", i - 1, x[i - 1], i - 1, y[i - 1], index);
//                    copy_pixel(&image[index], color);
//                }
//                if ( y2-y1 < 0) { // Down
//                    x[i] = x[i - 1];
//                    x[i - 1] = x1;
//                    y[i] = y[i - 1];
//                    y[i - 1] = y[i - 2] - 1;  // Straight down
//                    index = y[i - 1] * width + x[i - 1];
//                    printf("x[%i]=%.f  y[%i]=%.f   index = %i \n", i - 1, x[i - 1], i - 1, y[i - 1], index);
//                    copy_pixel(&image[index], color);
//                }
//            }
////             if ( x2-x1 != 0) { // Horizontal & Angle lines
////                 if ( y2-y1 == 0) { // Horizontal
////                     x[i] = x[i-1];
////                     x[i-1] = x[i-2] + 1;
////                     y[i] = y[i-1];
////                     y[i-1] = ;
////                 }
////             }
//
//        }
//
//    }
//    printf("\n");
//}
//
//int main(void) {
//
//    int width;
//    int height;
//    PIXEL_RGB24 *image,red,green,blue;
//
//    red.R=255; red.G=0;     red.B=0;
//    green.R=0; green.G=255; green.B=0;
//    blue.R=0;  blue.G=0;    blue.B=255;
//
//    if(tga_read("empty.tga",&width,&height,&image)!=TGA_OK) {
//        goto error;
//    }
//
//    /* Draw a few circles on the image */
//    draw_circle(image,width,height,width/2,height/2,width/3,&red);
//    draw_circle(image,width,height,width/2,height/2,width/4,&green);
//    draw_circle(image,width,height,width/2,0,width/2,&blue);
//
//    /* Draw a few lines on the image */
////	draw_line(image,width,height,180,180,280,300,&blue);        // 45 degrees  TODO
////    draw_line(image,width,height,180,180,180,28080,&green);       // Vertical
//    draw_line(image,width,height,180,180,280,180,&red);        // Horizontal  TODO
//
//
//    if(tga_write("circle.tga",width,height,image,24)!=TGA_OK) {
//        goto error_free;
//    }
//    printf("\n2");
//    exit:
//    free(image); /* Free memory allocated by tga_read() */
//    return 0;
//
//    error_free:
//    free(image);
//
//    error:
//    return -1;
//}
//
///* EOF */



////  IVAR test 1
//void draw_line(PIXEL_RGB24 *image,int width,int height,float x1,float y1,float x2,float y2,PIXEL_RGB24 *color)
//{
//    float X[] = {x1,x2}, Y[] ={y1,y2};
//    float x = x1;
//    float y = y1;
//    float ret = 0;
//    if(x2-x1==0){
//        while(ret!=-1)
//        {
//            ret = interp1(Y, X, 2, y,  &x);
//            if(x<width && y < height && x > -1 && y > -1)
//                image[(int)(x+y*width)] = *color;
//            y = y + (y1<y2?1:-1);
//        }
//        return;
//    }
//    while(ret!=-1)
//    {
//        ret = interp1(X, Y, 2, x,  &y);
//        if(x<width && y < height && x > -1 && y > -1)
//            image[(int)(x+y*width)] = *color;
//        x = x + (x1<x2?1:-1);
//    }
//}
//void draw_line(PIXEL_RGB24 *image,int width,int height,float x1,float y1,float x2,float y2,PIXEL_RGB24 *color)
//{
//    float X[] = {Min(x1,x2),Max(x1,x2)}, Y[] ={Min(y1,y2),Max(y1,y2)};
//    float x = x1;
//    float y = y1;
//    float ret = 0;
//    while(ret!=-1)
//    {
//        ret = interp1((x1!=x2?X:Y),(x1!=x2?Y:X), 2, (x1!=x2?x:y),  (x1!=x2?&y:&x));
//        if(x<width && y < width && x > -1 && y > -1)
//            image[(int)(x+y*width)] = *color;
//        if(x1!=x2)
//            x = x + (x1<x2?1:-1);
//        else
//            y = y + (y1<y2?1:-1);
//    }
//}
