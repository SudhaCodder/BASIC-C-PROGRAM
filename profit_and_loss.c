#include <stdio.h>
// to printf the incurred profit and loss
int main()
{
    int sp, cp, amount;
    printf("enter the cost price=\n");
    scanf("%d", &cp);
    printf("enter the selling price=\n");
    scanf("%d", &sp);
    if (sp > cp)
    {
        amount = sp - cp;
        printf("profit=%d\n", amount);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        printf("loss=%d\n", amount);
    }
    return 0;
}