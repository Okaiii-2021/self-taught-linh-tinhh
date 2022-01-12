#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int i, j, height = 20, width = 20, gameover, score, x, y;
int fruitx, fruity, flag;


// Function to draw a boudary
void draw(){
    system("cls");
    for(i = 0; i <= height; i++){
        for ( j = 0; j <= width; j++){
            if (i==0 || i == height || j==0 || j==width){
                    printf("#");
            }
            else{
                if (i == x && j == y )
                    printf("0");
                else if (i == fruitx && j == fruity)
                    printf("*");
                else 
                    printf(" ");
            }
        }
        printf("\n");
    }
}



// Function to generate fruit
void setup(){

    gameover = 0;
    x = height/2;
    y = width/2;
    label1:
        fruitx = rand()%20;
        if (fruitx==0)
            goto label1;
    label2:
        fruity = rand()%20;
        if (fruity==0)
            goto label2;
    score ==0;
}

// Function to take input
void input(){

    if(kbhit()){

        switch(getch()){

            case 'a':
                flag =1;
                break;
            case 's':
                flag = 2;
                break;
            case 'd':
                flag = 3;
                break;
            case 'w':
                flag = 4;
                break;
            case 'x':
                gameover = 1;
                break;


        }
    }
}


void logic(){
    sleep(0.01);
    switch(flag){
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
    }

// If snake hit the wall
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;

// If snake hit the fruit
    if (x == fruitx && y == fruity) {
    label3:
        fruitx = rand() % 20;
        if (fruitx == 0)
            goto label3;
  
    // After eating the above fruit
    // generate new fruit
    label4:
        fruity = rand() % 20;
        if (fruity == 0)
            goto label4;
        score += 10;
    }
}

int main(){


    int m, n;

    setup();

    while(!gameover){
        draw();
        input();
        logic();
    }
    
    
    return 0;
}

