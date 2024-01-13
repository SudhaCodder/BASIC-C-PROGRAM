#include <stdio.h>
// program for area and perimeter of square

int main()
{

    int a, area, perimeter;

    printf("enter side=\n");
    scanf("%d", &a);

    area = a * a;
    printf("Area of square=%d\n", area);

    perimeter = 4 * a;
    printf("Perimeter of square=%d\n", perimeter);

    return 0;
}