#include <stdio.h>
void main()
{
    int a, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("sum is %d\n", sum);
}