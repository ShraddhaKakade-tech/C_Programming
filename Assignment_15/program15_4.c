#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
    {
        return iNo1 * iNo2 * iNo3;
    }
    else if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        return iNo1 * iNo3;
    }
    else
    {
        return iNo1 * iNo2;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;
    
    printf("Enter 1st number\n");
    scanf("%d",&iValue1);

    printf("Enter 2nd number\n");
    scanf("%d",&iValue2);

    printf("Enter 3rd number\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d",iRet);
    
    return EXIT_SUCCESS;
}