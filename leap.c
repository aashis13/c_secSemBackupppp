#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year");
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d year is Leap year \n", year);
    }
    else if (year % 400 == 0)
    {
        printf("%d year is leap year \n", year);
    }
    else
    {
        printf("%d year us not a Leap Year");
    }
}