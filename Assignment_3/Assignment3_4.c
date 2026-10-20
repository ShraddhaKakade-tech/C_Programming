#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void DisplayConvert(char CValue){
    char ch = CValue;
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c",toupper(CValue));
    }
    else
    {
        printf("%c",tolower(CValue));
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    EXIT_SUCCESS;
}
