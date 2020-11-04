/* Modify the program of programming project 5 so that the polynomial is evaluated using the following formula:
   ((((3x+2)x-5)x-1)x+7)x-6
*/

#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter x:");
    scanf("%d", &x);

    y = (3 * x + 2 ) * (x - 5) * (x - 1) * (x + 7) * (x - 6);

    printf("The value of given polynomial is : %d\n", y);

    return 0;
}