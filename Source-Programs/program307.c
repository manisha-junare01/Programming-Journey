#include<stdio.h>

int main()
{
   int iNo = 0, iCount = 0, iDigit = 0;
   
   printf("Enter first number : \n");
   scanf("%d",&iNo);

    while(iNo != 0)
   {
       iDigit = iNo % 2;
       iCount = iCount + iDigit;
       iNo = iNo / 2; 
   }
printf("the no of 1s are: %d",iCount);
   printf("\n");  

    return 0;
}