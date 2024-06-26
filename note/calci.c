#include <stdio.h>
void main()
{
    int j, k;
    char c;
    printf("Enter numbers j and k: ");
    scanf("%d%d", &j, &k);
    printf("Which sign you want to take?\n");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf(" sum of %d and %d is %d", j, k, j + k);
        break;
    case '-':
        printf(" difference of %d and %d is %d", j, k, j - k);
        break;
    case '*':
        printf(" product of %d and %d is %d", j, k, j * k);
        break;
    case '/':
        if (k == 0)
        {
            printf(" Division by zero is not possible");
            break;
        }
        else
        {
            printf(" division of %d and %d is %d", j, k, j / k);
        }
        break;
    default:
        printf(" Operation Invalid");
    }
}