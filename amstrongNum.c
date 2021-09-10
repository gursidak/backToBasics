#include <stdio.h>

int main()
{

    int n = 0, result = 0, temp = 0, number = 0;
    scanf("%d", &n);
    number = n;
    while (n > 0)
    {
        temp = n % 10;
        result = result + temp * temp * temp;
        n = n / 10;
    }

    if (number == result)
    {
        printf("\n%d is a Amstrong Number\n", result);
    }
    else
    {
                printf("\n%d is not a Amstrong Number\n", result);

    }

    printf("\n\nAuthor - Gursidak $ingh\n\n");
    return 0;
}