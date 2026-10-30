//////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : used to display pattern
//  Input         : Integer
//  Output        : void
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}