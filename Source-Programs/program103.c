//call by address
#include<stdio.h>

void CallByAddress(int *iptr)
{
    (*iptr) ++;
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue); //CallByAddress(11);

    printf("Value after function call : %d\n",iValue);
    
    return 0;
}