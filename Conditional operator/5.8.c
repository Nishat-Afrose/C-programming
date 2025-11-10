#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    (a>b & a<c)?printf("%d is medium",a):(b>a & b<c)?printf("%d is medium",b):printf("%d is medium",c);
}
