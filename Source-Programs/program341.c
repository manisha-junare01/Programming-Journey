#include<stdio.h>
typedef unsigned int UINT;

//position 4 -- 4th bit mla off karaychiye

int main()
{
    UINT iMask = 0xffffffff;

    printf("Before : %x",iMask);

    iMask = ~iMask;

     printf("\nAfter : %x",iMask);
    
    return 0;
}