#include<stdio.h>
#include<math.h>
void main()
{
    double x,r;
    printf("Enter a value: ");
    scanf("%lf",&x);
    r = exp (x);
    printf("e to the power x (%.0lf) = %.3lf",x,r);
}
