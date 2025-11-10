#include<stdio.h>
#include<math.h>
int main()
{
    double n,cosec_inv;
    printf("Enter the value of n: ");
    scanf("%lf",&n);
    cosec_inv = asin(1/n)*180/M_PI;
    printf("cosec inverse (%.2f) = %.2f",n,cosec_inv);

    return 0;
}
