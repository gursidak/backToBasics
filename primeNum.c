#include<stdio.h>

int main(){

    int n=0, result=0, j=0;
    scanf("%d",&n);

    for (int i = 2; i < n/2; i++)
    {
        if(n%i==0){
            printf("\n%d is not a prime number as it is divisible by %i\n",n,i);
            j=1;
            break;

        }   
    }

    if(!j){
        printf("\n%d is a prime number\n",n);
    }
    



    return 0;
}