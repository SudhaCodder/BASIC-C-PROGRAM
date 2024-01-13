#include <stdio.h>
// to print first even number
int main()
{
    int n;
    int i;
    int r;
    printf("enter number=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}