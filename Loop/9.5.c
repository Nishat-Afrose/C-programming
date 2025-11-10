#include <stdio.h>

int main() {
    int decimal_num, quotient;
    int octal_num[100];
    int i = 0, j;
    printf("Enter a decimal integer: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0) {
        printf("Equivalent octal: 0\n");
        return 0;
    }

    quotient = decimal_num;
    while (quotient != 0) {
        octal_num[i] = quotient % 8;
        quotient /= 8;
        i++;
    }
    printf("Equivalent octal: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", octal_num[j]);
    }
    printf("\n");
    return 0;
}

