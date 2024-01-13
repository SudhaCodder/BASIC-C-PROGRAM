#include <stdio.h>
// to check the given number is even or odd
int main()
{
    int n, red;
    printf("Enter number=");
    scanf("%d", &n);
    red = n % 2;
    if (red == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
    return 0;
}