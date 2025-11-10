#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
     printf("reverse of digits = %d",sum);

}

