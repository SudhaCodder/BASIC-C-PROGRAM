#include <stdio.h>
// sum of 20 first natural numbers
int main()
{
    int i=1;
    int n;
    printf("Enter term of number:");
    scanf("%d",&n);
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
      
    }
    printf("sum of first natural number=%d",sum);
    return 0;
}