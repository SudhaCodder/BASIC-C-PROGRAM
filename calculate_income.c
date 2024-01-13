#include <stdio.h>

// A program to calculate income tax the basic his / her total salary
// male               female                   tax
// 350000            400000                   10%
// 450000            500000                    15%
// 700000            750000                    20%
#include <math.h>
int main()
{
    int salary;
    float tax;
    char gender;
    printf("Enter your salary=\n");
    scanf("%d", &salary);
    printf("Enter your gender(M/F)=\n");
    scanf("%d", &gender);
    if (gender == 'M')
    {
        if (salary <= 350000)
        {
            tax = 0;
        }
        else if (salary <= 450000)
        {
            tax = salary * 0.1;
        }
        else if (salary <= 700000)
        {
            tax = salary * 0.15;
        }
        else
        {
            tax = salary * 2.0;
        }
    }

    printf("tatal salay & tax=%f", tax);

    if (gender == 'F')
    {
        if (salary <= 400000)
        {
            tax = 0;
        }
        else if (salary <= 500000)
        {
            tax = salary * 0.1;
        }
        else if(salary <= 700000)
            {
                tax = salary * .15;
            }
        else
        {
            tax = salary * 0.20;
        }
    }
    printf("total salary & tax=%f", tax);
    return 0;
}