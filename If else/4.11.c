#include<stdio.h>
void main()
{
    int mark;
    printf("enter mark: ");
    scanf("%d",&mark);
    if (mark>=80)
        printf("Grade: A+");
    else if (mark>=70)
        printf("Grade: A");
    else if (mark>=60)
        printf("Grade: A-");
    else if (mark>=50)
        printf("Grade: B");
    else if (mark>=40)
        printf("Grade: B-");
    else if (mark>=30)
        printf("Grade: C");
    else
        printf("Fail");
}

