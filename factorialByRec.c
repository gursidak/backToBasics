#include<stdio.h>

int factorial(int n){
    int result=0;
    if(n==0 || n==1){
        return 1;
    }
    else{
        printf("factorial with %d\n", n);
        result = n * factorial(n-1);
        printf("factorial with %d\n", n);
        return result;

    }

}

int main(){

    int n;

    scanf("%d", &n);

    n = factorial(n);
    printf("\n%d\n", n);
        printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}