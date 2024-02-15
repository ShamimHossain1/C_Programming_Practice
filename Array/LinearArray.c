#include <stdio.h>
int main()
{

    int num[] = {4, 3, 23, 5, 45};
    int searchNum = 32, found = 1;

    for (int i = 0; i < 5; i++)
    {
        if (num[i] == searchNum)
        {
            found = 0;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}