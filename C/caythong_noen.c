#include <stdio.h>

int main()
{
    int c ;
    int b=0;
    for (int i=10; i>=0; i=i-2){
        
        for (int a=i; a>=0; a=a-1){
        
            printf("*");
        }
        
        printf("\n");
        
        b++;
        for (int a=0; a<b; a++){
            printf(" ");
        }
    }

    return 0;
}