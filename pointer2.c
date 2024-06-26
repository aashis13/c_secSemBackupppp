#include <stdio.h>
int main()
{
    int nu = 10;
    int *ptr = &nu;
    int mun = *ptr;
    printf(" number is %d", mun);
    printf("\n %d address of nu original 10", &nu);
    printf("\n %d pointer  value ", ptr);
    printf("\n %d pointer address ", &ptr);
    printf("\n %d  value of pointer ", *ptr);
    printf("\n %d value of nu", *(&nu));
    printf("\n %d value of p", *(&ptr));
    printf("\n %d address of mun", *(&mun));
    printf("\n %d value of p", *(&ptr));

    return 0;
}