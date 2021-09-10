#include <stdio.h>

void swapWithoutThirdVar(int *p, int *q)
{
    int a = *p, b = *q;
    a = a + b;
    b = a - b;
    a = a - b;

    *p = a;
    *q = b;
}
void swapWithThird(int *p, int *q)
{
    int a = *p, b = *q, temp = *p;
    a = b;
    b = temp;

    *p = a;
    *q = b;
}

int main()
{
    int a = 0, b = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before Swap :\na = %d\tb=%d\n", a, b);
    swapWithoutThirdVar(&a, &b);
    printf("After Swap :\na = %d\tb=%d\n", a, b);

    printf("Before Swap :\na = %d\tb=%d\n", a, b);
    swapWithThird(&a, &b);
    printf("After Swap :\na = %d\tb=%d\n", a, b);

    printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}