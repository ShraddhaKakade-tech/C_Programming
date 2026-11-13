/*
    1 2 3 4          11 12 13 14
      2 3 4          21 22 23 24
        3 4          31 32 33 34
          4          41 42 43 44

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j >= i)
            {
                printf("%d\t",j);
            }
            else{
                printf("\t");
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

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
