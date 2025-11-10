#include<stdio.h>
#include<math.h>
void main()
{
    double t, sec;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    sec = 1/cos(t*M_PI/180);
    printf("sec(%.0f) = %.3f",t,sec);

}
 /*printf("sec(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/

