#include<stdio.h>
void main ()
{
    int yr;
    printf("enter year: ");
    scanf("%d",&yr);
    if (yr%4==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}
