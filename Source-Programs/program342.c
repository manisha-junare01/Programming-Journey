#include<stdio.h>
typedef unsigned int UINT;

//1 0 1 1 0 0 0 0 
//0 1 0 0 0 0 0 0

int main()
{
    UINT iMask = 0xffffffbf;

    printf("Before : %x",iMask);

    iMask = ~iMask;

     printf("\nAfter : %x",iMask);
    
    return 0;
}