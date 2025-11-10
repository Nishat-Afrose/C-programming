#include<stdio.h>
void main()
{
    int a,b;
    printf("enter 1st num: ");
    scanf("%d",&a);
    printf("enter 2nd num: ");
    scanf("%d",&b);
    if (a>b)
        printf("%d is minimum",b);
    else
        printf("%d is minimum",a);
}

