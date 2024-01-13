#include <stdio.h>
// calculate the basic salary of employee
//  if basic salary >25000
// da 10% of basic salary
// hra = 5000
// if basic salary <= 25000
// da 15% of basic salary
// hra = 4200
// extra=2000

int main()
{
    float bs, da, hra, extra, total;
    printf("enter basic salary=");
    scanf("%f", &bs);
    if (bs > 25000)
    {
        da = (10 * bs) / 100;
        hra = 5000;
        total = bs + da + hra;
        printf("Total salary of:%f", total);
    }
    else
    {
        da = (10 * bs) / 100;
        hra = 5000;
        total = bs + da + hra;
        printf("Total salary of:%f", total);
    }

    return 0;
}