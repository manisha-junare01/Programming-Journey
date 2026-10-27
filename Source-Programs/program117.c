#include<stdio.h>

void Display(int Arr[], int  iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    printf("%d\n",Arr[iCnt]);    
    }
}

int main()
{
   int iLenght = 4;
   int iCnt = 0;
   int Brr[iLenght];

   printf("Enter the element : ");
   for(iCnt = 0; iCnt<iLenght; iCnt++)
   {
    
   }

   Display(Brr,iLenght);
    
    return 0;
}