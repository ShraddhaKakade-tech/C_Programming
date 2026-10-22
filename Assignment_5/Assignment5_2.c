#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iNo)
{
    if((iNo % 4 == 0) && (iNo % 100 != 0) || (iNo % 400 == 0))
    {
        printf("%d is  Leap Year",iNo);
    }
    else
    {
        printf("%d is not a Leap Year",iNo);
    }

}
int main()
{
    int iYear = 0;

    printf("Enter year\n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}