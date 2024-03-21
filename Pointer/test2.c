#include<stdio.h>

int function (int *a, int *b ){

    return  (*a + *b);  //returning
}
int function2 (int *c){

    for (int i = 0; i < 5; i++)
{
    c[i]= c[i] + 1;   
    
    printf("%d index = %d\n", i, c[i]);

    
}

}
int main(){

int num =1, num1=24 , sum, array[5] = {10, 30, 20, 20, 30};
int  *ptr, *ptr2, *ptr3, *ptr4;
ptr = &num;
ptr2 = &num1;

ptr3 =  &array[0];
ptr4 =  &array[0];



printf("Before:\n");
for (int i = 0; i < 5; i++)
{
    
    printf("%d index = %d\n", i, *ptr3);

    ptr3++;
}
printf("Change:\n");
function2(&array[0]);   //passing the address

printf("After:\n");
for (int i = 0; i < 5; i++)
{
    
    printf("%d index = %d\n", i, *ptr4);

    ptr4++;
}

*ptr = 10;

sum = *ptr + *ptr2;
printf("The sum of %d and %d is :%d\n",*ptr,*ptr2,sum);

printf("sum = %d", function(&num, &num1));


}