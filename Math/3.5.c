#include<stdio.h>
#include<math.h>
void main()
{
    double t, cot;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    cot = 1/tan(t*M_PI/180);
    printf("cot(%.0f) = %.3f",t,cot);

}
    /*printf("cot(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/
