#include <stdio.h>

int fibonacci(int n);

int main(){

    int a,i;
    printf("Enter the length of series: ");
    scanf("%d", &a);

    for(i=0; i<a; i++){
        printf("%d\n", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n){

    int i;
    int f0=0, f1=1, fn=1;

        if (n<0){
            return -1;
        }
            
        else if (n==1 || n==0){
            return n;
        }
        else {
            for (i=2; i<n; i++){
                f0 = f1;
                f1 = fn;
                fn = f0+f1;
            }
        }
    return fn;
}