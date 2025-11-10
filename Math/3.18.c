#include<stdio.h>
#include<math.h>
void main()
{
    double x,r;
    printf("Enter a value: ");
    scanf("%lf",&x);
    r = log10(x);
    printf("log10(x) = %.3lf",r);
}
//log10(x) & general log(x) is same
