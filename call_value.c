#include <stdio.h>
void squre(int x);
int main()
{
    int num = 5;

    printf("original value of=%d\n", num);
    squre(num);
    printf("after call value=%d\n", num);
    return 0;
}
void squre(int x)
{
    x = x * x;
    printf("%d\n", x);
}