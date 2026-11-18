#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal %d\n",ch);
    printf("Octal %o\n",ch);
    printf("Hexadecimal %x",ch);
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}