#include <stdio.h>

int prime(int);

int main()
{
    int x, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(prime(x))
    {
        int temp = x;

        while(temp != 0)
        {
            rev = rev * 10 + temp % 10;
            temp = temp / 10;
        }

        if(prime(rev))
            printf("Yes");
        else
            printf("No");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int prime(int n)
{
    int i;

    if(n < 2)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}