#include <stdio.h>


int main(){

    int sum = 0;
    int A[] = {1,5,3,5};

    //cal number of element of array

    int num = sizeof(A)/sizeof(A[0]);
    printf("number of elements: %d\n", num);

    for (int i = 0; i<num; i++){
        sum += *(A+i);
    }
    printf("sum is: %d", sum);







    return 0;
}
