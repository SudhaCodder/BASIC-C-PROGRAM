#include <stdio.h>

int main()
{
    int n;
    int flag;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    // Generate and print prime numbers using a for loop and if-else
    for (int i = 2; i <= n; i++)
    {
        flag = 1; // Assume the number is prime

        // Check if the current number is prime
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0; // Not a prime number
                break;
            }
        }

        // Print the prime number
        if (flag)
        {
            printf("%d ", i);
        }
    }

    // printf("\n");

    return 0;
}
