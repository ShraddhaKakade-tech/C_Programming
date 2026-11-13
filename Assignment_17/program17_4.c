#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 0;
    char ch = '\0';

    for(i = 1; i < iRow; i++)
    {
        iCnt = 1;
        ch = 'a';
        for(j = 1; j < iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t",iCnt);
                iCnt = iCnt + 1;
            }
            else
            {
                printf("%c\t",ch);
                ch = ch + 1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}