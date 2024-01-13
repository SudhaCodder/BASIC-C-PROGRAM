#include <stdio.h>
int main()
{
    int a[5] = {12, 13, 11, 8, 5};
    int n = 5;
    int temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
