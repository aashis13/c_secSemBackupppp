#include <stdio.h>
int main()
{
    int a;
    int *ptr;

    ptr = &a;
    *ptr = 0;

    printf("Value of a: %d\n", a);
    printf("Value of *ptr: %d\n", *ptr);

    *ptr += 5;
    printf("Value of a: %d\n", a);
    printf("Value of *ptr: %d\n", *ptr);
}