#include <stdio.h>

void display(char str[])
{
    int i=0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
   
}


int main()
{
    char str[]= "Hello World";
    display(str);
    

    return 0;
}