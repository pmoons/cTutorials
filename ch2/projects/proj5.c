/* Write a program that asks the user to enter a value for x and then displays the value for the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void)
{
    float x, answer;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    answer = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*(x) - 6;

    printf("Answer: %f\n", answer);
}
