#include<stdio.h>
#include<stdlib.h>

void Reverse(char str[])
{
    int i = 0;
    int j = 0;
    char temp = '\0';

    while(str[j] != '\0')
    {
        j++;
    }
    j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string\n");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    printf("Reversed string is %s\n", arr);

    return EXIT_SUCCESS;
}
