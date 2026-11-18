#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int val = 0;
    printf("Dec\tHex\tChar\t\n");
    for(val = 0; val <= 127; val++)
    {
        
        printf("%d\t%x\t%c\t\n",val,val,val);
        
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}