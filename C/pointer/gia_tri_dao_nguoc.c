#include <stdio.h>

int main(){

    int i, A[] = {1,2,3,4,5,6};

    int size = sizeof(A)/sizeof(A[0]);

    for (i=size-1; i>=0; i--){

        printf("%d\n", *(A+i));
    }

    return 0;
}