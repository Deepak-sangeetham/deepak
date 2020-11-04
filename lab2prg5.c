/* Write a program that aska the user to enter a value for x and then displays the value of the following polynomial
   3x^5+2x^4-5x^3-x^2+7x-6 
*/

#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter x : ");
    scanf("%d", &x);
    
    y = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6 ;

    printf("The value of given polynomial is : %d\n", y);
    return 0;

}