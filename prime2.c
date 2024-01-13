#include <stdio.h>
int main()
{
    int n, r, count = 0;
    printf("enter number=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            count++;
        }
        printf("%d\n", r);
    }
    if (count == 2)
    {
        printf(" prime number ");
    }
    else
    {
        printf("not prime number");
    }
    printf("prime number is=%d", count);

    return 0;
}