#include <stdio.h>
int main()
{

    int numbers[] = {34, 55, 43, 354, -2333};

    int max = numbers[0];
    int lowest = numbers[0];
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < lowest)
        {
            lowest = numbers[i];
        }
    }
    printf("The largest number is %d\n", max);
    printf("The lowest number is %d\n", lowest);

    return 0;
}