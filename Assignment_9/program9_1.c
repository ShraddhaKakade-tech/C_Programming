//////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : used to display pattern
//  Input         : Integer
//  Output        : void
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt <= 2 * iNo ; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t"); 
        }
}
}


int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}