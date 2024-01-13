#include <stdio.h>
// follow series - 1,4,9,16,25,....,n^2
int main()
{
    int n;
    int i = 1;
    printf("Enter number=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i * i);
    }
    return 0;
}