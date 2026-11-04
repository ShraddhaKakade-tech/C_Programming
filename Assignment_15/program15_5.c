#include<stdio.h>
#include<stdlib.h>

float Percentage(float fTotal, float fObtained)
{
    float fpercent = 0.0f;
    if(fTotal == 0.0f)
    {
        return 0.0f;
    }

    fpercent = (fObtained / fTotal) * 100.0f;

    return fpercent;
    
    
}
int main()
{
    float iValue1 = 0.0f, iValue2 = 0.0f;
    float fRet = 0.0f;
    
    printf("Enter total marks\n");
    scanf("%d",&iValue1);

    printf("Enter obtained mark\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f",fRet);
    
    return EXIT_SUCCESS;
}