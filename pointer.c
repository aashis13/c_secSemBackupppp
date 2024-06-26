#include <stdio.h>
int main()
{
    int number = 10;
    int *ptr = &number;
    int _number = *ptr;

   printf("Value of Number is: %d \n", _number);

  printf("The address of variable is: %p \n", &number);

    return 0;
}