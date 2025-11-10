#include<stdio.h>
#include<math.h>
void main()
{
    double t, radians, result;
    printf("enter angle in degree: ");
    scanf("%lf",&t);
    radians = (t*M_PI/180);
    result = cos(radians);
    printf("cos(%.0f) = %.3f",t,result);

}

/*printf("cos(%.0lf) = %.3lf",t,result);
    formate specifier (f/lf) anyone accepted*/
