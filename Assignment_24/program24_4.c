#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[20];
    char cValue ;
    int iRet = 0;
    
    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    printf("Enter character\n");
    scanf(" %c" , &cValue);

    iRet = LastChar(arr,cValue);

    printf("Last character is %c",iRet);

    return EXIT_SUCCESS;
}