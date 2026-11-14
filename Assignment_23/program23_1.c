#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {

        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{

    char arr[20];

    printf("Enter string\n");
    scanf("%d[^'\n]s",arr);

    strlwrx(arr);

    printf("Modifiedd string is %s",arr);

    return EXIT_SUCCESS;
}
