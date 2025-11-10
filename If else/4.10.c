#include<stdio.h>
void main()
{
    int mark;
    scanf("%d",&mark);
    if (mark>=80)
        printf("1st Division");
    else if (mark>=60)
        printf("2nd Division");
    else if (mark>=40)
        printf("3rd Division");
    else
        printf("Fail");
}
