#include <stdio.h>
void main()
{
    int a, b;
    float result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        result = a / b;
        printf("Result = %.2f\n", result);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

