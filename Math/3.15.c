#include<stdio.h>
#include<math.h>
void main()
{
    double a,r;
    printf("Enter a value: ");
    scanf("%lf",&a);
    r = sqrt(a);
    printf("square root of %.0lf is: %.3lf",a,r);
}
