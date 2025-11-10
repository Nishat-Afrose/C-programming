#include<stdio.h>
#include<math.h>
int main()
{
    double n, r;
    printf("enter value: ");
    scanf("%lf",&n);
    r = acos(n)*180/M_PI;
    printf("cos inverse (%.3f) = %.0f",n,r);
    return 0;
}
