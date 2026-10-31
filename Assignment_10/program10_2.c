//////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description   : used to display area of rectangle
//  Input         : Float
//  Output        : Double
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %lf",dRet);
    return EXIT_SUCCESS;
}