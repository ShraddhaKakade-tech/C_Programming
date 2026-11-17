#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;

    }
    return iCount;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    printf("Enter character\n");
    scanf(" %c" , &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d",iRet);


    return EXIT_SUCCESS;
}