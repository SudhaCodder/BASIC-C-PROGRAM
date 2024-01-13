#include <stdio.h>
// sum of three digit number
int main()
{
    int n, r1, r2, r3, sum = 0;

    printf("enter three digit number=");
    scanf("%d", &n);

    r1 = n % 10;
    n = n / 10;
    r2 = n % 10;
    n = n / 10;
    r3 = n;

    sum = r1 + r2 + r3;
    printf("sum of digitd=%d\n", sum);
    return 0;
}
