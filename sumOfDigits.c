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

    // if(result == number){
    //     printf("%d is a pallindrome",number);
    // }
    // else{
    //     printf("%d is not a pallindrome",number);
    // }

    printf("\n");

    return 0;
}