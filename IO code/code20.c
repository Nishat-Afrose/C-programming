#include<stdio.h>
void main()
{
    int d,m,y;
    //to show 0, char m[03];
    //scanf("%d/%2s/%d",&d,&m,&y);

    printf("Enter DD/MM/YY: ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day = %d\n",d);
    printf("Month = %d\n",m);
    printf("Year = %d\n",y);
}
