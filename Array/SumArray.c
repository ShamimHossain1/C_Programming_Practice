#include <stdio.h>
int main()
{

    int numbers[5], sum = 0; 
    float avarage;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("The value of numbers is %d\n", numbers[i]);
        sum += numbers[i];
    }
    printf("Sum of the values of numbers is %d.\n", sum);
    avarage = (float)sum / 5;
    printf("Average of the values of numbers is %.2f.\n", avarage);
    return 0;
}