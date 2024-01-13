#include <stdio.h>
// two number and then display the bigger number
int main()
{
    int num1, num2;
    printf("enter the first number=\n");
    scanf("%d", &num1);
    printf("enter the second number=\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("bigger bumber is=%d\n", num1);
    }
    else
    {
        printf("bigger number is=%d\n", num2);
    }
    return 0;
}