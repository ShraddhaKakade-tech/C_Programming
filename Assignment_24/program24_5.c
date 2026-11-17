#include<stdio.h>
#include<stdlib.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    for(iEnd = 0; str[iEnd] != '\0'; iEnd++);
    iEnd--;

    for(iStart = 0; iStart < iEnd; iStart++, iEnd--)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
    }
    
}

int main()
{
    char arr[20];
      
    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    StrRevX(arr);

    return EXIT_SUCCESS;
}