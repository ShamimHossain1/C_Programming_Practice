#include<stdio.h>
#include<stdio.h>
int main(){

    int x = 6;
    int* num;
    num =&x;
    printf("Value of x %d\n", x); //prints the address of variable
    printf("address of num %d\n", num); //prints the address of variable
    printf("Value of num %d\n", *num); //prints the address of variable

}