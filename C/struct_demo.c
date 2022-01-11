#include <stdio.h>  
#include <string.h>


struct Student{
        char name[50];
        char major[20];
        int age;
        double gpa;
    };

int main(){
    
    
    struct Student student1;
    strcpy(student1.name, "dodinhvan");
    strcpy(student1.major, "automation");
    
    student1.age = 22;
    student1.gpa = 7.9;
    
    printf("%lf", student1.gpa);
    
    
    
    return 0;
}