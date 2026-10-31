//////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : used to print difference between odd and even factorial
//  Input         : Integer
//  Output        : Integer
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iOddFact = 1, iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

     for(iCnt = 1; iCnt <= iNo; iCnt+=2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact-iOddFact);

    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf(" Factorial  Difference of number is %d",iRet);

    return EXIT_SUCCESS;
}