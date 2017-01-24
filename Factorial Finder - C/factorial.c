#include <stdio.h>

int factorial(n)
{

    if(n >= 2)
    {
       return n * factorial(n - 1);
    } else if(n == 0 || n == 1)
    {
        return 1;
    } else
    {
        return -1;
    }
}

int main()
{
    int number;

    printf("Enter a number ");
    scanf("%d", &number);

    int result = factorial(number);

    if(result == -1)
    {
        printf("The number should be greater than or equal to zero");
    } else
    {
        printf("The factorial of %d is %d", number, result);
    }
}
