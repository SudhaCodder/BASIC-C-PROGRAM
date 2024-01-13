#include <stdio.h>
// take the input tempreture in celsius and generate the output in fahrenheit
// f=(c*(9/5))+32
int main()
{
    float celsius, fahrenheit;
    printf("enter the celsius=");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;
    printf("The fahrenheit=%f", fahrenheit);
    return 0;
}