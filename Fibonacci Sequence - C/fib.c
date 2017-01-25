#include <stdio.h>

int main()
{
	int firstNum = 0 ;
	int secondNum = 1 ;
	int i, n;
	printf("enter length of the sequence: ");
	scanf("%d", &n);

    if(n == 1)
    {
        printf("0\n");
    } else if(n == 2)
    {
        printf("0\n1\n");
    } else
    {
        for(i = 0; i < n - 2; i++)
        {
            int c = secondNum;
            secondNum += firstNum;
            firstNum = c;
            printf("%d\n", c);
        }
    }
}
