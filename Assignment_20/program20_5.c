#include<stdio.h>
#include<stdlib.h>
/*
    1 2 3 4 5       11 12 13 14
    1 2     5       21 22 23 24
    1    3  5       31 32 33 34
    1 2 3 4 5       41 42 43 44


*/
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("%d\t",j);
            }
            else if( j == 1 )
            {
                printf("%d\t",j);
            }
            else if( j == iCol)
            {
                printf("%d\t",iCol);
            }
            else if(i == 1 || i == iRow)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
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