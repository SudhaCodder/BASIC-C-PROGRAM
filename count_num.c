#include <stdio.h>
// to count number of digit
int main()
{
    int n, ctr = 0;
    printf("enter number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        ctr = 1;
    }
    else
    {
        while (n != 0)
        {
            ctr++;
            n = n / 10;
        }
    }
    printf("numebr of digit=%d", ctr);

    return 0;
}

