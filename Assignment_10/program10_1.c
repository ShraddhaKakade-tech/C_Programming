//////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description   : used to display area of circle
//  Input         : Float
//  Output        : Double
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
const float PI = 3.14;

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area is %lf",dRet);

    return EXIT_SUCCESS;
}