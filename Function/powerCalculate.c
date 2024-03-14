#include <stdio.h>

void calculatePower(double b, double e)
{
    double result = 1, i;
    for (i = 0; i <= e; i++)
    {
        result *= b;
    }
    printf("Reust %.2lf", result);
}

int main()
{
    double base, exp;
    printf("Enter the Base Value : ");
    scanf("%lf", &base);
    printf("Enter the Exponent Value : ");
    scanf("%lf", &exp);
    calculatePower(base, exp);

    return 0;
}