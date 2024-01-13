#include <stdio.h>
// to check number is prime or not
int main()
{
    int count = 0;
    int n;
    int r;
    printf("enter number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf(" is a prime number");
    }
    else
    {
        printf("is not prime number");
    }

    return 0;
}