//////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : used to display numbers
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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}