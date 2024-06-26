#include <stdio.h>
void main()
{
    char a;
    printf("Enter the character");
    scanf(" %c", &a);
    (a == 'm') ? printf("Male") : (a == 'f') ? printf("Female") : printf("Other");
}