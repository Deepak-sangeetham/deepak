/* Write a program that calculates the remaining balance on a loan after the first,second and third monthly payments:
   Display each balance with two digits after the decimal point.
*/

#include <stdio.h>

int main()
{
    float loan, rate, payment;
    

    printf("Enter amount of loan :$ ");
    scanf("%f", &loan);
    printf("Enter interest rate : "); // Interest rate should not be more than 10.
    scanf("%f", &rate);
    printf("Enter monthly payment : ");
    scanf("%f", &payment);

    loan = (loan - payment) + (loan * rate /100 /12);
    printf("Balance remaining after first payment : $ %.2f\n", loan);

    loan = (loan - payment) + (loan * rate /100 /12);
    printf("Balance remianing after second payment : $ %.2f\n", loan);
    
    loan = (loan - payment) + (loan * rate /100 /12);
    printf("Balance remianing after third payment : $ %.2f\n",loan);

    return 0;
    


    

}


