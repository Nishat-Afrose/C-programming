#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 1st num: ");
    scanf("%d",&a);
    printf("enter 2nd num: ");
    scanf("%d",&b);
    printf("enter 3rd num: ");
    scanf("%d",&c);
    if (a>b & a>c)
        printf("%d is maximum",a);
    else if (b>a & b>c)
        printf("%d is maximum",b);
    else
        printf("%d is maximum",c);
}

