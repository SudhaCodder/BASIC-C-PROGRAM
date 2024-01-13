#include <stdio.h>
// compute the square of a number if its is even other wise cube
int main()
{
    int n, r, ans;
    printf("enter the number=");
    scanf("%d", &n);
    r = n % 2;
    if (r == 0)
    {
        ans = n * n;
        printf("Number is even , so number of square =%d", ans);
    }
    else
    {
        ans = n * n * n;
        printf("Number is odd , so number of cube=%d", ans);
    }
    return 0;
}