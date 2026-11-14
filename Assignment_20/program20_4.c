#include<stdio.h>
#include<stdlib.h>
/*
    *   *   *   *   *   *       11 12 13 14 15 16
    *   #   #   #   *   *       21 22 23 24 25 26
    *   #   #   *   $   *       31 32 33 34 35 36
    *   #   *   $   $   *       41 42 43 44 45 46
    *   *   $   $   $   *       51 52 53 54 55 56
    *   *   *   *   *   *       61 62 63 64 65 66

*/
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i + j) == iCol + 1)
            {
                printf("*\t");
            }
            else if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if((i + j) < iCol + 1)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and colmn\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}