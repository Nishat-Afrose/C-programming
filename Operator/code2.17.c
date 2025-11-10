#include <stdio.h>

int main()
{
    int number, result;
    printf("Enter an integer: ");
    scanf("%d", &number);
    result = number << 1;
    printf("Result after multiplying by 2 using shift: %d\n", result);

    return 0;
}

