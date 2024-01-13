#include <stdio.h>
// to print average of first 10 number
int main()
{
    int i, sum = 0;
    float avg = 0;
    int n;
    printf("enter the number=\n");
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        sum = sum + n;
    }
    avg = sum / 10.0;

    printf("Average of number=%f", avg);
    return 0;
}