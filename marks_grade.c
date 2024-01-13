#include <stdio.h>
// to print the grade of the student
// if percentage>75% =>'A'
// if percentage>65 &&<=75 =>'B'
// if percentage>50% &&<=65% =>'C'
// other fail
int main()
{
    float p, c, m, percentage;
    char grade;
    printf("enter marks physic=\n");
    scanf("%f", &p);
    printf("enter the chemistry=\n");
    scanf("%f", &c);
    printf("enter the mathematics=\n");
    scanf("%f", &m);
    percentage = (p + c + m) / 3;
    if (percentage > 75)
    {
        grade = 'A';
    }
    else if (percentage > 65 && percentage <= 75)
    {
        grade = 'B';
    }
    else if (percentage > 50 && percentage <= 65)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
        // F is fail
    }
    printf("your grade is=%c", grade);

    return 0;
}