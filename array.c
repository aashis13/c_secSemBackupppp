#include <stdio.h>
int main()
{
    int marks[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks of subject  %d \n", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("The value of sum of marks is %d \n", sum);
    int average = sum / 5;
    printf("The value of average of marks is %d \n", average);
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks of subject %d is %d \n", i, marks[i]);
    }
    return 0;
}