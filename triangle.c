#include <stdio.h>

int main()
{

    int n = 0, j=1,k=0;

    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        // printf("%d\n", i);
        for (int j = i; j > 0 ; j--)
            printf(" ");
        k=j;
        while(k){
            printf("*");
            k--;
        }
        j+=2;
        printf("\n");
    }
    printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}