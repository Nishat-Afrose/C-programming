#include<stdio.h>
#include<math.h>
void main()
{
    double t, cosec;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    cosec = 1/sin(t*M_PI/180);
    printf("cosec(%.0f) = %.3f",t,cosec);

}
 /*printf("cosec(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/


