#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,determinant,r1,r2;
    printf("enter the value a, b & c: ");
    scanf("%lf %lf %lf",&a, &b, &c);
    determinant = b*b-4*a*c;
    printf("determinant = %.2lf \n", determinant);
    if (determinant>0)
    {
        r1 = (-b+sqrt(determinant))/(2*a);
        r2 = (-b-sqrt(determinant))/(2*a);
        printf("roots are real and different\n");
        printf("r1 = %.2lf \n",r1);
        printf("r2 = %.2lf \n",r2);
    }
    else if (determinant==0)
    {
        r1 = (-b+sqrt(determinant))/(2*a);
        printf("roots are reaL and same\n");
        printf("r1 = %.2lf\n",r1);
    }
    else
        printf("roots are not real\n");

}
