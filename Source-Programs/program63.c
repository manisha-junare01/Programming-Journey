//input 5
//output -5 -3 -1
#include<stdio.h>

void Display(int iNo)
{
    //input = -8
    //output = 0 1 2 3 4 5
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=0; iCnt+=2)
    {
        printf("%d\t",iCnt);
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a No . : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}