#include <stdio.h>
#include <math.h>
// the average of lying between two number
int main()
{
    int m, n;
    int i, sum = 0;
    float avg = 0;
    float count = 0;

    printf("enter first number");
    scanf("%d", &m);

    printf("enter second number=\n");
    scanf("%d", &n);
    for (i = m; i <= n; i++)
    {
        sum = sum + i;
        count++;
    }
    if (count > 0)
    {
        avg = sum / count;
        printf("Average number is=%f", avg);
    }
    else
    {
        printf("invalide number");
    }
    return 0;
}