#include<stdio.h>
typedef unsigned int UINT;
//position 3 8

int main()
{
    UINT iMask = 0x00000084;
    UINT iNo = 0;
    UINT iResult = 0;

    printf("Enter A No : ");
    scanf("%d",&iNo);
    
    iResult = iNo ^ iMask;

    printf("UPdated No : %d\n",iResult);
    
    return 0;
}