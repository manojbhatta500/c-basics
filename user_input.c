#include<stdio.h>

void main(){
    int myAge;
    int minAge = 18;

    printf("please enter your age >");
    scanf("%d",&myAge);
    if(myAge >= minAge){
                printf("you can vote");

    }else{
        printf("you cant vote");


    }
    // before using the scanf we can't use : only use data type 
}