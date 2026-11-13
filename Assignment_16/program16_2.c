#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cUppCase = '\0', clowCase = '\0';

    for(i = 1; i <= iRow; i++)
    {
        cUppCase = 'A', clowCase = 'a';
        for(j = 1; j <= iCol; j++)
        {
            
            if(( i % 2) == 0)
            {
                printf("%c\t",clowCase);
                clowCase++;

            }
            else
            {
                printf("%c\t",cUppCase);
                cUppCase++;
            }

        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and column\n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}