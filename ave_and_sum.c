#include <stdio.h>
int main()
{
    int num1, num2, num3;
    int sum, Average;
    printf("enter first number=\n");
    scanf("%d", &num1);
    printf("enter first number=\n");
    scanf("%d", &num2);
    printf("enter first number=\n");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    Average = sum / 3;
    printf("sum of three number =%d", sum);
    printf("average number of three number = %d", Average);
    return 0;
}