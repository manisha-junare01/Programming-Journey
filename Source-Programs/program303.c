//dec to bin
#include<stdio.h>

int main()
{
   int No = 0;
   int iNo = 0;
   int iDigit = 0;
   
   printf("Enter number : \n");
   scanf("%d",&iNo);

   while(iNo != 0)
   {
       iDigit = iNo % 2;
       printf("%d",iDigit);
       iNo = iNo / 2; 
   }

   printf("\n");
   

    return 0;
}