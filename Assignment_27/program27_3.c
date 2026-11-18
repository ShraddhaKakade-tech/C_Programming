#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCapCnt = 0;
    int iSmallCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        else
        {
            iCapCnt++;
        }
        str++;
    }

    return (iSmallCnt - iCapCnt);
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}