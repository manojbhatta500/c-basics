#include<stdio.h>


void main(){

    int myArr[] = {1,2,3,4,23,44,21,22};

    printf("%d\n",myArr[0]);

    myArr[0] = 100;

    printf("%d\n",myArr[0]);

    for(int j = 0; j<8; j++){
         printf("%d\n",myArr[j]);
    }






}