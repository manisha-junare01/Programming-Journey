
#include<stdio.h>

void Display(int Arr[])
{
    printf("%d\n",*Arr);   
    Arr++; 
    printf("%d\n",*Arr);
    Arr++; 
    printf("%d\n",*Arr);
}

int main()
{
   int Brr[5]={10,20,30,40,50};

   printf("Base address of Arr : %d\n",Brr);
   Display(Brr);
    
    return 0;
}