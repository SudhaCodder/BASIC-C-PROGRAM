#include <stdio.h>
// to print smallest of three given numbers
int main()
{
    int a, b, c, smallest;
    printf("Enter the first number=\n");
    scanf("%d", &a);
    printf("Enter the second number=\n");
    scanf("%d", &b);
    printf("Enter the third number=\n");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        smallest = a;
    }
    else if (b < a && b < c)
    {
        smallest = b;
    }
    else
    {
        smallest = c;
    }
    printf("Smallest number is=%d", smallest);
    return 0;
}