//////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : used to display given number in string format
//  Input         : Integer
//  Output        : void
//  Author        : Shraddha Santosh Kakade
//  Date          : 30/10/2026
//
//////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{

    switch (iNo)
   {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;   
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break; 
        case 8:
            printf("Eight");
            break;    
        case 9:
            printf("Nine");
            break;
        default:
            printf("Invalid Input");
            break;
        }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}