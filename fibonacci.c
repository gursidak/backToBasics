#include <stdio.h>

int main()
{

    int n = 0, temp1 = 0, temp2 = 1, temp=0, i = 0;

    scanf("%d", &n);

    while (i < n)
    {
        printf("%d\n", temp2);

        temp = temp1;
        temp1 = temp2;
        temp2 = temp + temp2;
        i++;
    }
    printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}