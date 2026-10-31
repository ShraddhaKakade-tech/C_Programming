//////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : used to display number if fits in condition
//  Input         : Integer
//  Output        : void
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}