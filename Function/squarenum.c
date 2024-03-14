#include <stdio.h>

void function(int a)
{
    a = a * a;
    printf("Number %d", a);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    function(num);
    return 0;
}