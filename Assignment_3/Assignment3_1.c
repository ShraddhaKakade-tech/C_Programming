#include<stdio.h>
#include<stdlib.h>
void Printeven(int iNo)
{
    if(iNo <= 0){
        return;
    }

    int iCnt = 0;
    int evenNumb = 0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        evenNumb = 2*iCnt;
        printf("%d\t",evenNumb);
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Printeven(iValue);

    EXIT_SUCCESS;
}