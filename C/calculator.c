
#include <stdio.h>    
int main(){
    
    double num1;
    double num2;
    char op;
    
    printf("Enter num1: ");
    scanf("%lf", &num1);
    
    printf("Enter num2: ");
    scanf("%lf", &num2);
    
    printf("Enter operation: ");
    scanf(" %c", &op);
    
    if (op == '+'){
        printf("%.2f", num1+num2);
    }
    else if (op == '-'){
        printf("%.2f", num1-num2);
    }
    else if (op == '*'){
        printf("%.2f", num1*num2);
    }
    else if (op == '/'){
        printf("%.2f", num1/num2);
    }
    
    return 0;
}
