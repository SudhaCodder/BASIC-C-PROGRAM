#include <stdio.h>
// follow this series = 1/1,1/8,1/27,1/64,.....,1/n^3
int main()
{
    int n;
    int i = 1;
    printf("enter the number=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("1/%d\n", i * i * i);
    }
    return 0;
}