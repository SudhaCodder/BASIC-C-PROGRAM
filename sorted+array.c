#include <stdio.h>
int main()
{
    int a[20];
    int i, j, k, temp;
    int n;
    printf("enter the array of size=");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter elements=");
        scanf("%d", &a[i]);
    }
    for (int b = 0; b < n; b++)
    {
        for (k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        printf("%d\t", a[j]);
    }
    return 0;
}
