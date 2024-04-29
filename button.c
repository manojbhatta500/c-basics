#include<stdio.h>


void main(){

int a ;
scanf("%d",&a);

printf("your input is %d\n",a);

switch (a)
{
case 0:
    printf("sunday");
    break;
case 1:
    printf("monday");
    break;

case 2:
    printf("tuesday");
    break;    

case 3:
    printf("wednesday");
    break;    
case 4:
    printf("thursday");
    break;    
case 5:
    printf("friday");
    break;    
    

default:
    printf("sorry out of index");
    break;
}




}