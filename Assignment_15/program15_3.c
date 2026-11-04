#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter 1st number\n");
    scanf("%d",&iValue1);

    printf("Enter 2nd number\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    return EXIT_SUCCESS;
}