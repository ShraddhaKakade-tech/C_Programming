//////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description   : used to display temperature in celsius
//  Input         : Float
//  Output        : Double
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    
    return ((fTemp - 32.0f) *(5.0/9.0));
   
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit\n");
    scanf("%f",&fValue);

   
    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf",dRet);
    return EXIT_SUCCESS;
}