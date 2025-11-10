#include <stdio.h>
void decToBinary(int n)
{
    if (n > 1)
    {
        decToBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main()
{
    int decimal_num;
    printf("Enter a decimal integer: ");
    scanf("%d", &decimal_num);

    if (decimal_num == 0)
    {
        printf("Equivalent binary: 0\n");
    }
    else if (decimal_num > 0)
    {
        printf("Equivalent binary: ");
        decToBinary(decimal_num);
        printf("\n");
    }
    else
    {
        printf("Negative number handling is more complex and not included in this simple version.\n");
    }

    return 0;
}

