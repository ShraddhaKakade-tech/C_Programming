#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '1' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%19[^\n]s",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}