#include<stdio.h>

void Display(int iNo)
{
    //input = 5
    //output = -5 -4 -3 -2 -1 0 1 2 3 4 5
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
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