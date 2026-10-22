#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks <=0) || (fMarks >= 100) || (iAge <= 0))
    {
        printf("Invalid Input");
    }

    if((iAge >= 17) && (fMarks >= 60))
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
    
    
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age :\n");
    scanf(" %f %d",&fMarks,&iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}