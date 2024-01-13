#include <stdio.h>
// sum of first natural number
int main()
{
    int i;
    int n;
    int sum = 0;
    printf("enter the number =");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of first natural number=%d", sum);
    return 0;
}