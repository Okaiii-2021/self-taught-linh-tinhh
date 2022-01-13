#include <stdio.h>

int fib(int n);

int main(){

    int a,i;
    printf("Enter your number: ");
    scanf("%d", &a);
    for (i=0; i<a; i++)
        printf("%d\n",fib(i));


    return 0;
}


int fib(int n){

    if (n<=1){
        return n;
    }

    else{
        return (fib(n-1)+fib(n-2));
    }
        
}