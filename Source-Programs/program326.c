#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    int iCnt = 0;
    UINT iMask = 0x80000000;
     for(iCnt = 1; iCnt <= 32; iCnt++)
     {
        printf("%d : %x \n",iCnt,iMask);//1 shift by one  -- %u unsigned
         iMask = iMask>>1;
     }
    return 0;
}