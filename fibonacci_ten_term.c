#include <stdio.h>


int main()
{
    // int n = 10; // Number of terms to print
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series for first %d terms:\n", 10);
    printf("%d\n", first);
    printf("%d\n", second);

    for (i = 3; i <= 10; i++)
    {
        // if (i <= 1)
        //     next = i;
        // else {
        next = first + second;
        first = second;
        second = next;

        printf("%d\n", next);
    }

    return 0;
}
