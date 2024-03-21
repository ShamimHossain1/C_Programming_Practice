#include <stdio.h>

void display(int arr[])
{
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", arr[i]);
    }
}

void max(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 5; ++i)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Highest value is %d", max);
}

int main()
{

    int num[5] = {1, 2, 3, 4, 5};
    display(num);
    max(num);

    return 0;
}