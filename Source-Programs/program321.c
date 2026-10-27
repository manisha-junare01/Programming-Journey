#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <=1000; iCnt++)
    {
        printf("\n%d\t%x",iCnt,iCnt);
    }
    return 0;
}