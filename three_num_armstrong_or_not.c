#include <stdio.h>
#include<math.h>
// to check number of three number are armstrong or not
int main()
{
    int n;
    int r;
    int sum = 0;
    printf("enter three number");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + pow(r, 3);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not armstrong number");
    }
    return 0;
}