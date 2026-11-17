#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8:30 AM");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9:20 AM");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10:30 AM");
    }
    else
    {
        printf("Invalid Input");
    }

}

int main()
{
    char cValue = '\0';
    
    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;

}