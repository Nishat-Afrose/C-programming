#include<stdio.h>
void main()
{
    int n;
    back:
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("(i)\n");break;
        case 2: printf("(ii)\n");break;
        case 3: printf("(iii)\n");break;
        case 4: printf("(iv)\n");break;
        case 5: printf("(v)\n");break;
        case 6: printf("(vi)\n");break;
        case 7: printf("(vii)\n");break;
        case 8: printf("(viii)\n");break;
        case 9: printf("(ix)\n");break;
        case 10: printf("(x)\n");break;
        default:
            printf("Invalid Input. Please give input <= 10\n");
            goto back;
    }
}
