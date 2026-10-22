#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo > 18)
    {
        printf("Eligible for voting");
    }
    else if(iNo < 0)
    {
        printf("Invalid age");
    }
    else
    {
        printf("Not Eligible for voting");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter age :\n");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);
    EXIT_SUCCESS;
}