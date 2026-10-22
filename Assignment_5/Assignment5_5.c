#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Uppercase Alphabet");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Lowercase Alphabet");
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character\n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}