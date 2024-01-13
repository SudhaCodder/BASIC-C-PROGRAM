#include <stdio.h>
// sum of all natural number lying between two given number (inclusive)
int main()
{
    int i;
    int m, n; // or take m=ll, n=ul
    int sum = 0;
    printf("enter first number=\n");
    scanf("%d", &m);
    printf("enter second number=\n");
    scanf("%d", &n);
    for (i = m; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of all number is =%d", sum);
    return 0;
}