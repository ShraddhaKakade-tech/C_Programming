//////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description   : used to convert distance from KM to Meter
//  Input         : Integer
//  Output        : Integer
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{   
    int iConverter = iNo * 1000;
    return iConverter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distnce\n");
    scanf("%d",&iValue);

   
    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d",iRet);
    return EXIT_SUCCESS;
}