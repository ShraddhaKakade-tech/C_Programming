#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char * str)
{
    if(*str == 'a' || 
       *str == 'e' || 
       *str == 'i' || 
       *str == 'o' || 
       *str == 'u'  
      )
      {
        return TRUE;
      }
    else
     {
        return FALSE;
     }

}

int main()
{
   char arr[20] = {'\0'};
   BOOL bRet = FALSE;

    printf("Enter string\n");
    scanf("%19[^\n]",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
       printf("String contain vowel");
    }
    else
    {
      printf("String do not contain vowel");
    }


    return EXIT_SUCCESS;
}