#include<stdio.h>

int main()
{
    int Arr[5]={0};//ekda 0 dil tr sgle 0 hotat
    int iCnt = 0;

    printf("Enter the Elememts : ");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    printf("\nEnemnts of Array Are...\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

    }

    return 0;
}