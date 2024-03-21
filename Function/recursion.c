#include <stdio.h>

int fact (int n) {
    if(n == 1)
    return 1;

    else 
    return n * fact(n-1);
}
 /************
  * 5*F4
  * 5*4*F3
  * 5*4*3*F2
  * 5*4*3*2*1
  * 
  * 
  * 
  * ***************/


int main()
{
    int num;
    printf("Enter num: ");
    scanf(" %d", &num);
    printf("Factorial of %d is: %d\n",num,fact(num));
    
    return 0;
}