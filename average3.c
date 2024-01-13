#include <stdio.h>
// to calculate the average nummber of all the number line between given two number
int main()
{
    int m, n;
    int sum = 0;
    float avg = 0;
    int ll, ul;
    int number_of_elements;
    printf("enter m\n");
    scanf("%d", &m);
    printf("enter n\n");
    scanf("%d", &n);
    if (m < n)
    {
        ll = m;
        ul = n;
    }
    else
    {
        ll = n;
        ul = m;
    }

    for (int i = ll; i <= ul; i++)
    {
        sum = sum + i;
    }

    number_of_elements = ul - ll + 1;
    avg = sum / number_of_elements;
    printf("Average of numbers=%f", avg);
    return 0;
}