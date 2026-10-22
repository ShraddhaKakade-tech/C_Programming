#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is Greater ",iNo1);
    }
    else if(iNo1 < iNo2)
    {
        printf("%d is Greater ",iNo2);
    }
    else
    {
        printf("Both Numbers ar equal");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n ");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);
    EXIT_SUCCESS;
}