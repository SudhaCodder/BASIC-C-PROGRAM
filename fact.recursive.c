#include <stdio.h>

// Function to calculate factorial
int calculateFactorial(int n)
{
    int result = 1;

    // Calculate factorial using a loop
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int num;

    // Input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate and display the factorial
        printf("Factorial of %d = %d\n", num, calculateFactorial(num));
    }

    return 0;
}
