/* Modify Project 2 so that the user is promprted for the radius to enter.*/

#include <stdio.h>

#define PI 3.14159

int main(void) {
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = (4.0f/3.0f) * PI * (radius * radius * radius);

    printf("Volume of sphere: %f\n", volume);
}
