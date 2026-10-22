#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000.0f)
    {
        printf("Payable Amount %.2f\n",fAmount);

    }
    else if(fAmount >= 1000.0f && fAmount < 5000.0f)
    {
        fDiscount = fAmount * (10.0f / 100.0f);
        fFinalAmount =  fAmount - fDiscount;
        printf(" Payable Amount is %.2f\n",fFinalAmount); 
    }
    else
    {
        fDiscount = fAmount * (20.0f / 100.0f);
        fFinalAmount = fAmount - fDiscount;
        printf(" Payable Amount is %.2f\n",fFinalAmount); 

    }
}
int main()
{
   float fAmount = 0.0f;

   printf("Enter purchase amount :");
   scanf("%f",&fAmount);

   CalculateDiscount(fAmount);

   return EXIT_SUCCESS;


}