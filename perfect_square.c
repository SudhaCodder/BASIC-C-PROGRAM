#include <stdio.h>
#include <math.h>

int main()
{
    int num, r;
    printf("enter any number=");
    scanf("%d", &num);
    r = sqrt(num);
    if (num == r * r)
    {
        printf("perfect squre number");
    }
    else
    {
        printf("not perfect squre  number");
    }
    return 0;
}