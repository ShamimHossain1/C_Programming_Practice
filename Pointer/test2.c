#include<stdio.h>
int main(){

int num =1, num1=24 , sum;
int  *ptr=&num, *ptr2=&num1;

*ptr = 10;

sum = *ptr + *ptr2;
printf("The sum of %d and %d is :%d\n",*ptr,*ptr2,sum);


}