/* Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments */

#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = (interest_rate * .01) / 12.0f;

    loan_amount = (loan_amount - monthly_payment) + (monthly_interest_rate * loan_amount);
    printf("Balance remaining after the first payment: $%.2f\n", loan_amount);

    loan_amount = (loan_amount - monthly_payment) + (monthly_interest_rate * loan_amount);
    printf("Balance remaining after the second payment: $%.2f\n", loan_amount);

    loan_amount = (loan_amount - monthly_payment) + (monthly_interest_rate * loan_amount);
    printf("Balance remaining after the third payment: $%.2f\n", loan_amount);

}
