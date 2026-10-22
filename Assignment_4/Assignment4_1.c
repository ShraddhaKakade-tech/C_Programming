#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo < 0)
    {
        printf("Negative Number");
    }
    else
    {
        printf("Positive Number");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    EXIT_SUCCESS;
}