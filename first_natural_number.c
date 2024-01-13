#include <stdio.h>
// to print first natural number
int main()
{
    int n;
    int i = 1;

    printf("enter number=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}