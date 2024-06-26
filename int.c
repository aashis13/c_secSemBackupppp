#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d %d is the odd number", n, sum);
}