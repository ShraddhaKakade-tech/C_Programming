#include<stdio.h>
#include<stdlib.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str =*str + 32;
          
        }
        else
        {
            *str = *str - 32;
        }
        str++;

    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]s",arr);

    strtoggleX(arr);

    printf("Toggle string is %s",arr);

    return EXIT_SUCCESS;
}