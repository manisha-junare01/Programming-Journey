#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iSize = 0, iCnt = 0, iLength = 0, iRet = 0;
    
    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    Brr = (int *)malloc(sizeof(int)*iSize);

    printf("Enter A Number : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Summation(Brr, iSize);
    printf("Addition is : %d\n",iRet);

    free(Brr);

    return 0;
}