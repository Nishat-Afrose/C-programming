#include<stdio.h>
void main()
{
    int n,ans;
    printf("Enter a number: ");
    scanf("%d",&n);
    ans = n & 3;
    printf("mod by 4 = %d",ans);
}
