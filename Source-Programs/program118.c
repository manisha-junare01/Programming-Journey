#include<stdio.h>

int Summation(int Arr[],int  iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    
    }
    return iSum;
}

int main()
{
    
   int iLenght = 4;
   int Brr[iLenght];
   int iRet = 0;
   int iCnt = 0;

   for(iCnt = 0; iCnt<iLenght; iCnt++)
   {
    scanf("%d",&iCnt);
   }

   iRet = Summation(Brr,iLenght);

   printf("Addition of all lements : %d\n",iRet);   
    
   return 0;
}