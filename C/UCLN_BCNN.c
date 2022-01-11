#include <stdio.h>  

int UCLN(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return UCLN(b, a%b);
    }
}

int BCNN(int a, int b){
    if (UCLN(a,b) != 0){
        return a*b/UCLN(a,b);
    }
    else{
        return 0;
    }
    
}

int main() {
    int a,b;
    printf("enter (a,b): \n");
    scanf("%d%d", &a, &b);
    
    printf("ULNN = %d\n", UCLN(a,b));
    printf("BCNN = %d", BCNN(a,b));
    
    return 0;
}