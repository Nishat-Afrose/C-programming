#include<stdio.h>
#include<math.h>
void main()
{
    double t, result;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    result= tan(t*M_PI/180);
    printf("tan(%.0f) = %.3f",t,result);

}

    /*printf("tan(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/
