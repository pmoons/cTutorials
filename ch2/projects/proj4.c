/* Ask the user to enter a dollars and cents amount, then display the amount with a 5% tax addded */

#include <stdio.h>

#define TAX .05f

int main(void)
{
    float amount, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total = (amount * TAX) + amount;

    printf("With tax added: $%.2f\n", total);
}
