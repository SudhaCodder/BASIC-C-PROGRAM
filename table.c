#include <stdio.h>
// to print the table of number
int main()
{
    int n;
    int i = 1;
    printf("eneter the number =");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d=%d\n", n, i, i * n);
    }
    return 0;
}