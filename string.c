// #include<stdio.h>


// void main(){

//     char name[] = "1";

//     int length = sizeof(name)/sizeof(name[0]);

//     printf("%d\n",length);







// }


#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "1";
    int length = strlen(name);
    printf("%d\n", length);


    char carName[] = "Volvo";
int carLength = sizeof(carName) / sizeof(carName[0]);
int i;

printf("car length is : %d\n",carLength);

for (i = 0; i < carLength; ++i) {
  printf("%c\n", carName[i]);
}
    return 0;
}
