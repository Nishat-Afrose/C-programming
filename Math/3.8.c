#include<stdio.h>
#include<math.h>
void main()
{
   double n,result;
   printf("enter value: ");
   scanf("%lf",&n);
   result = asin(n)*180/M_PI;
   printf("sin inverse(%.3f) = %.0f",n,result);
}



