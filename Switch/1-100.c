#include<stdio.h>
void main()
{
    int n,ones,twos;
    back:
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("One\n");break;
        case 2: printf("Two\n");break;
        case 3: printf("Three\n");break;
        case 4: printf("Four\n");break;
        case 5: printf("Five\n");break;
        case 6: printf("Six\n");break;
        case 7: printf("Seven\n");break;
        case 8: printf("Eight\n");break;
        case 9: printf("Nine\n");break;
        case 10: printf("Ten\n");break;
        case 11: printf("Eleven\n");break;
        case 12: printf("Twelve\n");break;
        case 13: printf("Tharteen\n");break;
        case 14: printf("Fourteen\n");break;
        case 15: printf("Fifteen\n");break;
        case 16: printf("Sixteen\n");break;
        case 17: printf("Seventeen\n");break;
        case 18: printf("Eightteen\n");break;
        case 19: printf("Nineteen\n");break;
        case 100: printf("Hundred\n");break;
        default:
            switch(ones)
            {
                case 1: printf("One\n");break;
                case 2: printf("Two\n");break;
                case 3: printf("Three\n");break;
                case 4: printf("Four\n");break;
                case 5: printf("Five\n");break;
                case 6: printf("Six\n");break;
                case 7: printf("Seven\n");break;
                case 8: printf("Eight\n");break;
                case 9: printf("Nine\n");break;
            }
            switch (twos)
            {
                case 2: printf("Twenty");break;
            }
            printf("Invalid Input. Please give input <= 10\n");
            goto back;
    }
}


