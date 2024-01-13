#include <stdio.h>
// to check the entered character is a vowel or consonant
int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c ,character is vowel");
    }
    else
    {
        printf("%c ,character is consonant");
    }
    return 0;
}