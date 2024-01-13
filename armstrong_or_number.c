#include <stdio.h>
#include <math.h>

// to check Armstrong number or not

int main()
{
    int n;
    int ctr = 0;
    int sum = 0;
    int r;
    printf("enter the number=");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        ctr++;
        n = n % 10;
    }
    n = temp;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + pow(r, ctr);
        temp = temp / 10;
    }

    if (n == sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }

    return 0;
}






