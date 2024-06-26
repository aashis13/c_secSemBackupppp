#include <stdio.h>
int sum(int a, int b, int i, int j)
{
    return a + b + i + j;
}
void main()
{
    int a, b, i, j;
    printf("Enter four number \n");
    scanf("%d %d %d %d", &a, &b, &i, &j);
    printf("sum of four number is: %d\n", sum(a, b, i, j));
}