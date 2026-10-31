//////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description   : used to display the multiples of given number
//  Input         : Integer
//  Output        : void
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMultiple = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMultiple = iCnt * iNo;
        printf("%d\t",iMultiple);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}