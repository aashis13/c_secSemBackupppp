#include <stdio.h>
void main()
{
    int a, b, sum, diff, mul, div, mod;
    printf("Enter two numbers");
    scanf(" %d %d", &a, &b);
    sum = a + b;
    printf("sum is %d \n", sum);

    diff = a - b;
    printf("difference is %d \n", diff);

    mul = a * b;
    printf("mul is %d \n", mul);

    div = a / b;
    printf("division is %d \n", div);

    mod = a % b;
    printf("modulus is %d \n", mod);
}