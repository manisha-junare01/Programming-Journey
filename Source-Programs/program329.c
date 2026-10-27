#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    //largest value of int
    UINT iMask = 0xffffffff;
    printf("integer : %u\tHex : %x\n",iMask,iMask);    
    return 0;
}