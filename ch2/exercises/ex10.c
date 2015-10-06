/* Computes the dimensional weight of a 12" x 10" x 8" box */
#include <stdio.h>
int main(void){int height,length,width,volume,weight;height=8;length=12;width=10;volume=height*length*width;weight=(volume+165)/166;printf("Dimensions:%dx%dx%d\n",length,width,height);printf("Volume(cubicinches):%d\n",volume);printf("Dimensionalweight(pounds):%d\n",weight);return 0;}

/* The essential spaces in this program include the #include direction (a new line is necessary for this), as well as the spaces after the keyword "int" and the "return" keyword.*/
