#include<stdio.h>
void main()
{
    int n, rem, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);

    for (; n != 0; n = n / 10)
    {
        rem = n % 10;
        sum = sum + rem;
    }

    printf("sum of digits = %d", sum);
}
