#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 64;
    UINT iAns = 0;
   
    printf("Enter first number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf("7rd bit is on ..\n");
    }

    else
    {
        printf("7rd bit is of..");
    }
    return 0;
}