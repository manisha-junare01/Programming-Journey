#include<stdio.h>
typedef unsigned int UINT;
//bit      7       3   ->position
//input  1 0 1 0 0 1 0 0 
//output 1 1 0 0 0 0 0 0

int main()
{
    UINT iMask = 0x00000044;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter A No : ");
    scanf("%d",&iNo);
    
    iResult = iNo ^ iMask;

    printf("UPdated No : %d\n",iResult);
    
    return 0;
}