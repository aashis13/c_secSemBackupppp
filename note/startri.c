#include <stdio.h>
void main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf(" *  ");
        }
        printf("\n");
    }
}