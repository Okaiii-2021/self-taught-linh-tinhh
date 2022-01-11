#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int a;
    int b;

    while (1){
        scanf("%i", &a);
        if (0<a & a<5000){
            printf("ngon\n");
            break;
        }
        else{
            printf("nhap lai\n");
            continue;
        }

    }

    while (1){
        scanf("%i", &b);
        if (0<b & a<5000){
            printf("ngon\n");
            break;
        }
        else{
            printf("nhap lai\n");
            continue;
        }

    }

    

    printf("%i\n",(a+b)*2);
    printf("%i\n", a*b);
   
    return 0;
}

