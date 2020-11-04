/* Write a program that computes the volume of the sphere with a 10-meter radius,using the formula of volume of sphere. write the
   fraction 4/3 as 4.0f/3.0f.

*/

#include <stdio.h>

int main()
{
    int radius;
    float volume;

    radius = 10;

    volume = 4.0f/3.0f * 3.14 * radius * radius * radius ;

    printf("volume of the radius : %.2f\n", volume);

    return 0;
}
