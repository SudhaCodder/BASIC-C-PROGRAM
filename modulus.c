#include <stdio.h>
// Find Modulus

int main()
{

    float divident, divisor, modulus;

    printf("enter the divident=\n");
    scanf("%f", &divident);

    printf("enter the divisor=\n");
    scanf("%f", divisor);

    modulus = divident / divisor;
    printf("modulus is=%f", modulus);

    return 0;
}

