// #include <stdio.h>
// int main()
// {
//     int a[20];
//     int n;
//     int temp;
//     printf("enter the size of array: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("enter elements:");
//         scanf("%d", &a[i]);
//     }

//     for (int b = 0; b < n - 1; b++)
//     {
//         for (int k = 0; k < n - 1; k++)
//         {
//             if (a[k] > a[k + 1])
//             {
//                 temp = a[k];
//                 a[k] = a[k + 1];
//                 a[k + 1] = temp;
//             }
//         }
//         }
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t", a[j]);
//         }

//         return 0;
//     }

#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    int temp = 0;
    printf("enter the size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter elmenent:");
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n - 1; j++)
    {
        for (int k = 0; k < n - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}