#include <stdio.h>
// to check the entered character is in lower case or upper case
int main()
{
    char ch;
    printf("enter character=");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("upper case");
    }
    else if (ch >= 'a' && ch < 'z')
    {
        printf("lower case");
    }
    else
    {
        printf("not a english letter ");
    }
    return 0;
}