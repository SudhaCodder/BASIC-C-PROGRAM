#include <stdio.h>
#include <math.h>
// to calculate 'a' rest to the power 'b'
int main()
{
    int a, b;
    int ans;
    printf("Enter a=\n");
    scanf("%d", &a);

    printf("Enter b=\n");
    scanf("%d", &b);

    ans = pow(a, b);
    printf("%d ^ %d=%d", a, b, ans);
    return 0;
}