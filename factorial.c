#include <stdio.h>

int main(){
    int n=0, i=0, result=1;
    scanf("%d", &n);
    i=n;
    while(i>1){
        result= result * i;
        i--;
    }

    printf("%d\n", result);
    printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}