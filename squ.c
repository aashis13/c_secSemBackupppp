#include<stdio.h>
int sque()
{
    int i;
    printf("Enter the number \n");
    scanf("%d", &i);
    return i*i;
}
void main()
{
    printf("Square of the number is: %d\n", sque());
}