#include <stdio.h>
#include <math.h>

void factor(int n)
{
    if (n % 2 == 0)
    {
        printf("%d ", 2);
        while (n % 2 == 0)
        {
            n = n / 2;
            
        }
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if ( n % i == 0 )
        {
            printf("%d ", i);
            while( n % i == 0 )
            {
                n = n / i;
                
            }
        }
        
    }

    if (n > 2)
         printf("%d", n);

    printf("\n");
}

int main()
{
    int x;
    printf("Enter the num: ");
    scanf("%d", &x);
    factor(x);
}
