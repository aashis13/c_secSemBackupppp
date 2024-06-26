#include <stdio.h>
void main()
{
    int a, i, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &a);
    while (i != 0)
    {
        i = a % 10;
        a = a / 10;
        sum = sum + i;
    }
    printf("sum is %d\n", sum);
}