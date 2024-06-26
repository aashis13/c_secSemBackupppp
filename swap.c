#include <stdio.h>
void swap(int *i, int *j)
{
    int *temp;
    temp = i;
    i = j;
    j = temp;
    printf("swap  i=%d j=%d \t", *i, *j);
}
void main()
{
    int i = 7, j = 18;
    swap(&i, &j);
    printf("main  i= %d and j=%d", i, j);
}
