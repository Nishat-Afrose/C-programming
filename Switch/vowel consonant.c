#include<stdio.h>
void main()
{
    char n;
    printf("enter character: ");
    scanf("%c",&n);
    switch(n)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("vowel");break;
        default :
            printf("consonant");
    }
}

