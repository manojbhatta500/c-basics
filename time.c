#include<stdio.h>


void main(){
    int currentHour;
    printf("enter the current hour: ");
    scanf("%d",&currentHour);

    if(currentHour > 6 && currentHour < 12){
        printf("good morning");

    }else if(currentHour > 12 && currentHour < 16){
                printf("good afternoon");


    }else if(currentHour > 16 && currentHour < 20){
                printf("good evening");


    }else if (currentHour > 20 && currentHour < 25){
                printf("good noght");


    }else{
                printf("this is not a valid hour");


    }

    



}