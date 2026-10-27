#include<stdio.h>
typedef unsigned int UINT;
//bit position 23
int main()
{
    UINT iNo = 0;
    UINT iMask = 0xffbfffff;

    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);
 
    iNo = iNo & iMask;

    printf("Updated number : %d \n",iNo);
    
    return 0;
}