#include<stdio.h>
#include<stdlib.h>

int CountCap(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    iRet = CountCap(arr);

    printf(" %d",iRet);

    return EXIT_SUCCESS;
}