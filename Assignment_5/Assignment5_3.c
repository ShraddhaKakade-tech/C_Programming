#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fNo)
{
    if(fNo <= 0 || fNo > 100)
    {
        printf("Invalid marks");
        return ;
    }

    if(fNo >= 90 && fNo <= 100)
    {
        printf("A");
    }
    else if (fNo >= 75 && fNo <= 89)
    {
        printf("B");
    }
    else if(fNo >= 60 && fNo <= 74)
    {
        printf("C");
    }
    else if (fNo >= 40 && fNo <= 59)
    {
        printf("D");
    }
    else
    {
        printf("FAIL");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter marks:");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}