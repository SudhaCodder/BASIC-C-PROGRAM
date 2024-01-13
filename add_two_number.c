#include <stdio.h>
// add two numbers
int main()
{
    int a, b, sum;
    printf("enter first number=\n");
    scanf("%d", &a);
    printf("enter the second number=\n");
    scanf("%d", &b);
    sum = a + b;
    printf("sum of two numbers=%d", sum);
    return 0;
}