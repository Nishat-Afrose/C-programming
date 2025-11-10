#include<stdio.h>
#include<math.h>
int main()
{
    double n, r;
    printf("enter value: ");
    scanf("%lf",&n);
    r = atan(n)*180/M_PI;
    printf("tan inverse (%.3f) = %.0f",n,r);
    return 0;
}


