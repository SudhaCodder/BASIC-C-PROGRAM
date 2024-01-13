#include <stdio.h>
// to find simple interest
int main()
{
    float p, r, t, simple_interest;

    printf("enter amount=\n");
    scanf("%f", &p);

    printf("enter rate=\n");
    scanf("%f", &r);

    printf("enter time=\n");
    scanf("%f", &t);

    simple_interest = (p * r * t) / 100;

    printf("simple interst is=%f", simple_interest);
    return 0;
}