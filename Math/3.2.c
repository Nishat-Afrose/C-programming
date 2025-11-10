#include<stdio.h>
#include<math.h>
void main()
{
    double t, radians, result;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    radians = (t*M_PI/180);
    result = sin(radians);
    printf("sin(%.0f) = %.3f",t,result);
}

    /*printf("sin(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/
