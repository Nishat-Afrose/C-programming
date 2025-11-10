#include <stdio.h>

int main()
{
    int number, result;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Divide by 2 using right shift operator
    result = number >> 1;

    // Output the result
    printf("Result after dividing by 2 using shift: %d\n", result);

    return 0;
}

