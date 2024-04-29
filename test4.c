#include<stdio.h>


int main(){

int a = 0;
int b = 1;
printf("initial A :%d\n",a);
printf("initial B :%d\n",b);



int c;
c = a;
a = b;
b = c;

printf("end result A :%d\n",a);
printf("end result B :%d\n",b);



int x = 5;
int y = 5;
int total = x + y;

printf("the addition of two number %d\n",total);


int xx = 5, yy = 6, zz = 50;
printf("%d\n", xx + yy + zz);




return 0;
}