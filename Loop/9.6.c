#include <stdio.h>

int main() {
    long int deciNum, qtn, rem;
    int i = 0, j;
    char hex[100];

    printf("Enter any decimal number: ");
    scanf("%ld", &deciNum);

    qtn = deciNum;

    while (qtn!= 0) {
        rem = qtn % 16;

        if (rem < 10) {
            hex[i] = rem + '0';
        } else {
            hex[i] = rem + 'A' - 10;
        }
        i++;
        qtn = qtn / 16;
    }

    printf("Equivalent hexadecimal value of decimal number %ld: ", deciNum);

    for (j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}
