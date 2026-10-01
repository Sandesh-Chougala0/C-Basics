#include <stdio.h>
#include <stdbool.h>

int main(){

    //creating variables
    char name[] = "Sandesh";
    int age = 19;
    float CGPA = 8.61;
    bool isActive = true;

    //printing variables
    printf("Hi everyone my name is %s & my age is %d My diploma CGPA is %.2f\n",name,age,CGPA);
    if(isActive){
        printf("He is active!");
    }
    else{
        printf("He is inactive");
    }
}