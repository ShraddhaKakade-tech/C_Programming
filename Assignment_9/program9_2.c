//////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description   : used to peform conversion from dollar to INR
//  Input         : Integer
//  Output        : Integer
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    int iDollar = iNo * 70;
    return iDollar;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;
}