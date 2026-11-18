
#include<stdio.h>

void Display(int iNo)
{
    //input = 5
    //output = 1 2 3 4 5a
    int iCnt = 0;

    for(iCnt = 1; iCnt<5; iCnt++)
    {
        printf("%d\t");
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