/* Write a program that asks the user to enter a U.S. dollar amount then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills */

#include <stdio.h>

int main(void)
{
    int amount, bills;

    printf("Enter a dollar amount: $");
    scanf("%d", &amount);

    bills = amount / 20;
    printf("$20 bills:  %d\n", bills);
    amount = amount - (bills * 20);
    
    bills = amount / 10;
    printf("$10 bills:  %d\n", bills);
    amount = amount - (bills * 10);
    
    bills = amount / 5;
    printf("$5 bills:  %d\n", bills);
    amount = amount - (bills * 5);

    bills = amount;
    printf("$1 bills:  %d\n", bills);
}
