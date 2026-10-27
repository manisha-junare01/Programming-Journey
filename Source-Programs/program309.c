#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;
   
    printf("Enter first number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
        printf("3rd bit is on ..\n");
    }

    else
    {
        printf("3rd bit is of..");
    }
    return 0;
}