
#include<stdio.h>
int main(){

    int x = 6, y = 40, z =- 4;
    int* ptr;
    ptr =&x;
    printf("Value of x %d\n", x); //prints the address of variable
    printf("Value of ptr %d\n", *ptr); //prints the address of variable

}