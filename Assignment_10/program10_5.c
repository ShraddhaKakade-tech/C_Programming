//////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description   : used to convert area from squre feet to square meter
//  Input         : Integer
//  Output        : Double
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double dConvtr = 0.0;

    dConvtr = iValue * 0.0929;

    return dConvtr;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf",dRet);

    return EXIT_SUCCESS;
}