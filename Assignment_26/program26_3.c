#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    char cCount = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {

        for(cCount = ch; cCount <= 'Z'; cCount++)
        {
            printf("%c\t",cCount);
        }
    }
    else if(ch >= 'a' && ch <='z')
    {

        for(cCount = ch; cCount >= 'a'; cCount--)
        {
            printf("%c\t",cCount);
        }
    }
    else
    {
        printf("\t");
    }

}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;

}