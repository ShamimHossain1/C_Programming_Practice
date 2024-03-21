#include <stdio.h>
#include <math.h>
int main()
{

    double base, exp, result;
    printf("Enter the Base Value : ");
    scanf("%lf", &base);
    printf("Enter the Exponent Value : ");
    scanf("%lf", &exp);
    result = pow(base,exp);
    printf("%lf", result);
    return 0;
}