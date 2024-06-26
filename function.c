#include <stdio.h>
void sumoftwonumbers(int a, int b)
{
    int yoooooo = a + b;
    printf("sum of %d and %d is %d", a, b, yoooooo);
}
void main()
{
    int x, y;
    printf("Enter first number");
    scanf("%d", &x);
    printf("Enter second number");
    scanf("%d", &y);
    sumoftwonumbers(x, y);
}