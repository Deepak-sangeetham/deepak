/* Modify the program of programming project 2 so that it prompts the user to enter radius of the sphere.
*/


#include <stdio.h>

int main()
{
    int radius;
    float volume;

    printf("Enter radius of sphere : ");
    scanf("%d", &radius);

    volume = 4.0f/3.0f * 3.14 * radius * radius * radius ;

    printf("volume of the radius : %.2f\n", volume);

    return 0;
}
