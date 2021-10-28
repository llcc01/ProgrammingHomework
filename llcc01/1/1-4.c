#include <stdio.h>
#define PI 3.14159265
int main()
{
    double r;
    scanf("%lf",&r);
    printf("The perimeter is %.4lf, the area is %.4lf.\n",2*PI*r,PI*r*r);
    return 0;
}