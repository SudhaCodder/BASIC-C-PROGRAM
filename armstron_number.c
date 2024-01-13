#include <stdio.h>
#include <math.h>
// to check if a given number is Armstrong number or not
// only three digit
int main()
{
    int n, r, sum;
    printf("enter the number=");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + pow(r, 3); // sum = sum +(r*r*r*)
        n = n / 10;
    }

    if (sum = temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }

    return 0;
}

