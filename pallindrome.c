#include<stdio.h>

int main(){

    // declaration;
    int n=0, number=0, result=0;

    // input
    scanf("%d",&n);
    number = n;

    // reversing the number;
    while(n>0){
        result = result*10 + n%10;
        n=n/10;
    }

    if(result == number){
        printf("%d is a pallindrome",number);
    }
    else{
        printf("%d is not a pallindrome",number);
    }

    printf("\n\nAuthor - Gursidak $ingh\n\n");
    

    return 0;
}