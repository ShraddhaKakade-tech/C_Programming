/*
    11 12 13 14     1 2 3 4
    21 22 23 24     1 * * 4
    31 32 33 34     1 * * 4
    41 42 43 44     1 2 3 4

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    for(i = 1; i <= iRow; i++)
    {
        iCnt = 1;
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d\t",j);
                iCnt++;
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column\n");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}