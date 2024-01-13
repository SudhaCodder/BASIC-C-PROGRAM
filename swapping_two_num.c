#include <stdio.h>
//swapping two numbers using third veriable

int main()
{
    double firstNumber, secondNumber, temp;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter the second number: ");
    scanf("%lf", &secondNumber);

    // Swapping the numbers using a third variable
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    // Output the swapped values
    printf("After swapping, the first number is: %lf\n", firstNumber);
    printf("After swapping, the second number is: %lf\n", secondNumber);

    return 0;
}
