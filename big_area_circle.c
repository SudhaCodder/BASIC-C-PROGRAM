#include <stdio.h>
// you are given with the row of length 100m you have to make square and a circle using
// the same row , print the name of the figure with the larger cubered area
int main()
{
    int row = 100;
    int r = row / 4;
    float r1 = row / 2;
    int square = r * r;
    float circle = 3.14 * r1 * r1;
    if (square > circle)
    {

        printf("Largest cubered area is square=%d ", square);
    }
    else
    {
        printf("Largest cubered area is circle=%f ", circle);
    }
    return 0;
}