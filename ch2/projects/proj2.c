/* This program will computer the volume of a sphere wth a 10-meter radius, using the formula 4/3(pi)r^3.*/

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    int radius = 10;
    float volume;

    volume = (4.0f/3.0f) * PI * (radius * radius * radius);
    printf("Volume: %f\n", volume);
}
