#include <stdio.h>
#include <math.h>
// mini calculator
int main()
{
    int choise, a, b, ans;
 
    printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication \n 4 for division\n 5 for remainder\n 6 for power\n 7 for factorial \n");
    scanf("%d", &choise);
    switch (choise)
    {
    case 1:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%d\n", &b);
        ans = a + b;
        printf("The sum of %d & %d is %d", a, b, ans);
        break;
    case 2:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%d\n", &b);
        ans = a - b;
        printf("The subtract of %d & %d is %d", a, b, ans);
        break;

    case 3:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%d\n", &b);
        ans = a * b;
        printf("The multiple of %d & %d is %d", a, b, ans);

    case 4:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%d\n", &b);
        ans = a / b;
        printf("The division of %d & %d is %d", a, b, ans);
        break;

    case 5:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%dn", &b);
        ans = a % b;
        printf("The remainder of %d & %d is %d", a, b, ans);
        break;

    case 6:
        printf("enter 2 number");
        scanf("%d\n", &a);
        scanf("%d\n", &b);
        ans = pow(a, b);
        printf("The power of %d & %d is %d", a, b, ans);
        break;

    case 7:
        int n;
        int fact = 1;
        printf("enter  number");
        scanf("%d\n", &n);
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("the fact of %d is %d", n, fact);

        break;
    default:
    printf("invalid option");
    }
    return 0;
}