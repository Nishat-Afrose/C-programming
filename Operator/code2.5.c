#include <stdio.h>
void main()
{
    float a, b, result;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);
    if(b != 0.0) {
        result = a / b;
        printf("Result = %.2f\n", result);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

