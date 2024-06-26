#include <stdio.h>
void main()
{
    int age;
    char a; // string
    printf("Enter your age");
    scanf("%d", &age);
    printf("Are you Nepali?(Y/N) \n");
    scanf(" %c", &a);
    if (a == 'Y' || a == 'y')
    {
        if (age >= 18)
        {
            printf("You are eligible to drive \n");
        }
        else
        {
            printf("You are not eligible to drive");
        }
    }
    else
    {
        printf("You are not nepali \n");
    }
}