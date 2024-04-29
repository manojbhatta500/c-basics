#include<stdio.h>


void main(){

    int i , j;

    for(i=0;i<5;i++){
        printf("outer loop %d\n",i);

        for ( j = 1; j < 11; j++)
        {
            printf("inner loop running %d\n",j);
        }
        


    }





}