// Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20,$10,$5 and $1 bills.

#include <stdio.h>

int main()
{
    int a,b,c,d,x,y,z;

    printf("Enter a dollar amount:");
    scanf("%d", &a);

    x = a/20;
    y = a - 20 * x;
    z = y/10;
    b = y - 10 * z;
    c = b/5;
    d = b - 5 * c;

    printf("No_of $20 bills : %d\n",x);
    printf("No_of $10 bills : %d\n",z);
    printf("No_of $5 bills : %d\n",c);
    printf("No_of $1 bills : %d\n",d);

    return 0;
    

}