#include <stdio.h>
int main()
{
    int num, digit, sum = 0;
    printf("enter digit:");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("plese enter positive number");
    }
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("sum of digit:%d", sum);
    return 0;
}

