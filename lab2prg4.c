// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added to it.

#include <stdio.h>

# define TAX_PERCENTAGE (5.0f/100.0f)


int main()
{
    int amount, finalamount;
    float taxadded;

    printf("Enter the amount:");
    scanf("%d", &amount);

    taxadded = amount * TAX_PERCENTAGE;

    finalamount = taxadded + amount;

    printf(" The final amount after adding tax: %d\n",finalamount);
    
    return 0;

}