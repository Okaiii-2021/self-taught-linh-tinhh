#include <stdio.h>



int main(){


    int a[5]={1,2,3,4,5};
    int *p;
    p = &a[0];

    printf("%d\n", p);
    printf("%d\n", *p);

    p = p+1;
    printf("%d\n", p);
    printf("%d", *p);




    
    return 0;
}