#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            iCnt = iCnt * iDigit;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}