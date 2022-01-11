#include <stdio.h>  



int main() {
    int scret_num = 5;
    int guess;
    int guess_count = 0;
    int guess_limit = 3;
    int outofguess=0;
    
    
    while (guess!= scret_num && guess_count<=guess_limit){
        printf("Enter your guess: ");
        scanf("%d", &guess);
        guess_count++;
    }
    
    if (guess_count<=guess_limit){
        printf("You win!!!\nin %d attempt\n", guess_count);
    }
    else {
        printf("out of guesses !!!");
    }
    
    return 0;
}




