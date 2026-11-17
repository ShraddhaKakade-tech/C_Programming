#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iIndex;
        }
        str++;
        iIndex++;
    }

    return -1;

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

    iRet = FirstChar(arr, cValue);

    printf("Chrcter location is %d",iRet);

    return EXIT_SUCCESS;
}