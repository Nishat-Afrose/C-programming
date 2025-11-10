#include <stdio.h>

int main() {
    int x, y, i;
    long long result = 1;

    printf("Enter the base number (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    for (i = 0; i < y; i++) {
        result = result * x;
    }

    printf("%d to the power of %d is %lld.\n", x, y, result);

    return 0;
}
