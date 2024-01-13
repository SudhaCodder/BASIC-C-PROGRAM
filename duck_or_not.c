#include <stdio.h>
// to check duck number or not
int main()
{
    int n, r, flag = 0;
    printf("enter the number:");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        r = n % 10;
        if (r == 0)
        {
            flag = 1;
            break;
        }
        n = n / 10;
    }
    if (flag == 1)
    {
        printf("%d is aduck no", temp);
    }
    else
    {
        printf("%d id not aduck number", temp);
    }
    return 0;
}