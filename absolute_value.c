#include <stdio.h>
// to generator to absolute value of a given number
int main()
{
    int num, temp;
    printf("Enter the number=");
    scanf("%d", &num);
    if (num <= 0)
    {
        temp = -num;
        printf("Number is %d", +temp);
    }
    else
    {
        temp = num;
        printf("Number is %d", temp);
    }
    printf("Absolute number is %d", temp);
    return 0;
}