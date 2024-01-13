#include <stdio.h>
int isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1 = 1, n2;
    printf("enter term of prime number=");
    scanf("%d", &n2);
    printf("The prime number between %d and %d are:", n1, n2);
    for (int i = 2; i <= n2; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}