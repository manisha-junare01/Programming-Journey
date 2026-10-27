#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    int iCnt = 0;
    UINT iMask = 1;
     for(iCnt = 1; iCnt <= 32; iCnt++)
     {
        printf("%d : %d \n",iCnt,iMask);//1 shift by one
        iMask = iMask<<1;
     }
    return 0;
}