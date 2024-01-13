#include <stdio.h>
// to print palindrome

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Calculate the reversed number
    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
