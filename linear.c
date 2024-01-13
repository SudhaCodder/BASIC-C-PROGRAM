#include <stdio.h>
int main()
{
    int a[10], n, i, j, loc, term;
    printf("how many element");
    scanf("%d", &n);
    printf("enter array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element to be reached");

    scanf("%d", &term);

    for (j = 0; j < n; j++)
    {
        if (a[j] == term)
        {
            loc = j+ 1;
            break;
        }
    }
    printf("linear search");

    return 0;
}