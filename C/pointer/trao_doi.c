#include <stdio.h>

void swap(int *num1, int *num2){

    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){

    int num1;
    int num2;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);


    swap(&num1, &num2);
    printf("-----trao doi-----\n");

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);



    return 0;
}