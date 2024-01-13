// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         double numerator = i;
//         double denominator = pow(i, i);
//         double result = numerator / denominator;
//         printf("%d/%.0lf = %lf\n", i, denominator, result);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
// following series 1/1, 2/4, 3/27, 4/256,...,n/n^n
int main()
{
    long int n;
    long int i;
    long int ans, ans1;
    printf("Enter the number of term=");
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
    {
        ans = i;
        ans1 = pow(i, i);
    }
    printf("%ld / %ld\n", ans, ans1);

    return 0;
}