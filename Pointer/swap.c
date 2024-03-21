

#include<stdio.h>


void  swap(int *ptr1, int *ptr2) {

     int swap = *ptr1;   //Dereferencing the
     *ptr1 = *ptr2;
     *ptr2 = swap;
}

int main(){



int a[5]={34,67,9,4,3};

int *ptr;
ptr = &a[0];

// printf("%d\n",ptr);


for (int i = 0; i < 5; i++)
{
    printf("%d\n", *ptr);
    printf("%d\n",ptr);
    ptr++;
}


    int x = 6, y = 40;
   


 //pointers to
    printf("Before Value of x = %d and y = %d\n", x, y); //prints the address of variable

    swap( &x ,&y );      //passing addresses of variables

    printf("After Value of x = %d and y = %d\n", x, y); //prints the address of variable

}