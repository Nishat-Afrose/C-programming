#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    result = a ^ b;  // Bitwise XOR operation

    printf("Bitwise XOR of %d and %d is: %d\n", a, b, result);

    return 0;
}

