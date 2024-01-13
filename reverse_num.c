#include <stdio.h>
// to print reverse the number
int main() {
    int num, reversed = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the reverse of the number
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Display the reversed number
    printf("The reversed number is: %d\n", reversed);

    return 0;
}
