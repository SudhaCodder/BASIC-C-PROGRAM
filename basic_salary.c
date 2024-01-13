#include <stdio.h>
// if gender='M' & age>=25,salary=25000;
// if gender='M' & age<25,salary=20000;
// if gender='F' & age>=25,salary=30000;
// if gender='F' & age<25,salary=25000;

int main()
{
    char gender;
    int age, salary;
    printf("Enter your gender(M/F)=");
    scanf("%c", &gender);
    printf("enter your age= ");
    scanf("%d", &age);
    if (gender == 'M')
    {
        if (age >= 25)
        {
            salary = 25000;
        }
        else
        {
            salary = 20000;
        }
    }
    else if (gender = 'F')
    {
        if (age >= 25)
        {
            salary = 30000;
        }
        else
        {
            salary = 25000;
        }
    }
    printf("your salary is %d\n", salary);
    return 0;
}