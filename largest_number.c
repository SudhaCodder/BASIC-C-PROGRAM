#include <stdio.h>
// print the largest of three given number
int main()
{
    int a, b, c, largest;
    printf("Enter first number=\n");
    scanf("%d", &a);
    printf("Enter second number=\n");
    scanf("%d", &b);
    printf("Enter the third number=\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    printf("Largest number=%d", largest);

    return 0;
}