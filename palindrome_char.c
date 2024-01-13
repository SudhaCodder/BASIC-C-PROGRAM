#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int a = 0;
    int b = strlen(str) - 1;
    while (a < b)
    {
        if (str[a] != str[b])
        {
            return 0;
        }
        a++;
        b--;
    }
    return 1;
}
int main()
{
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    if (isPalindrome(input))
    {
        printf("%s is a palindrome.\n", input);
    }
    else
    {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}