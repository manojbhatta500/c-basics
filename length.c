#include<stdio.h>


void main(){

    int myArr[] ={1,3,4,5,6};

    int length = sizeof(myArr)/ sizeof(myArr[0]);


    printf("the size of array is %d",length); 


}



// explanation  is this 

// total array ko sizeof le bytes dinxa 
// if we divide the toal bytes by one individaual byte then we will know the answer for eg


// array has 1,2,3,4,5
// now 1 item value is 4 
//  total size of array is 4 *5 = 20
//  now if we devide the 20  by one element size  then 
//  20/4 = 5 so the array length is 5