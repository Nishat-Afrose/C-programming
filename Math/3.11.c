#include<stdio.h>
#include<math.h>
int main()
{
    double n,cot_inv;
    printf("Enter the value of n: ");
    scanf("%lf",&n);
    cot_inv = atan(1/n)*180/M_PI;
    printf("cot inverse (%.2f) = %.2f",n,cot_inv);

    return 0;
}
