#include <stdio.h>

int L(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1 || n == 2)
        return 1;
    else
        return L(n - 1) + L(n - 2) + L(n - 3);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth Tribonacci number is %d", n, L(n));

    return 0;
}