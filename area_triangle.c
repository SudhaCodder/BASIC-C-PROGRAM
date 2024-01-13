#include <stdio.h>
// area of triangle
int main()
{
    int area, l, b;
    printf("enter the l=\n");
    scanf("%d", &l);
    printf("ebter the b=\n");
    scanf("%d", &b);
    area = (l * b) / 2;
    printf("area of tringle=%d", area);
    return 0;
}