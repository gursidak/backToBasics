#include<stdio.h>

int main(){

    // declaration;
    int n=0, number=0, result=0;

    // input
    scanf("%d",&n);
    number = n;

    // reversing the number;
    while(n>0){
        result = result + n%10;
        n=n/10;
    }
        printf("Sum of Digits = %d",result);


    printf("\n\nAuthor - Gursidak $ingh\n\n");

    return 0;
}