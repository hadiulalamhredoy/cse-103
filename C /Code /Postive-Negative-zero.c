// find largest numer of 2 numbers
#include <stdio.h>
int main()
{

    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 > number2)
    {
        printf("%d is the largest number\n", number1);
    }
    else if (number2 > number1)
    {
        printf("%d is the largest number\n", number2);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}
