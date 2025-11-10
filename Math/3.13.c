#include<stdio.h>
#include<math.h>
int main()
{
    double n,sec_inv;
    printf("Enter the value of n: ");
    scanf("%lf",&n);
    sec_inv = acos(1/n)*180/M_PI;
    printf("sec inverse (%.2f) = %.2f",n,sec_inv);

    return 0;
}

