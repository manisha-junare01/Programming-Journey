#include<stdio.h>
typedef unsigned int UINT;
//position 9 & 17
//bit      7       3   
//input  1 0 1 0 0 1 0 0 
//output 1 1 0 0 0 0 0 0

int main()
{
    UINT iMask = 0x00010100;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter A No : ");
    scanf("%d",&iNo);
    
    iResult = iNo ^ iMask;

    printf("UPdated No : %d\n",iResult);
    
    return 0;
}