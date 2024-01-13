#include <stdio.h>
// cube of a given number < if number is +ve >
// square of a given number < if number is -ve >

int main()
{
    int n;
    int ans;
    printf("enter the number=");
    scanf("%d", &n);

    if (n >= 0)
    {
        ans = n * n * n;
        printf("number is +ve so, square of number=%d\n", ans);
    }
    else
    {
        ans = n * n;
        printf("number is -ve so, square of number=%d\n", ans);
    }
    return 0;
}