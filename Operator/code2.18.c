#include <stdio.h>

int main()
{
    int n, result;
    printf("Enter an integer: ");
    scanf("%d", &n);
    result = (n << 2) + n;
    printf("Result after multiplying by 5 using shift: %d\n", result);

    return 0;
}

