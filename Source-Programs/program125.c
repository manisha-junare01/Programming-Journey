#include<stdio.h>
#include<stdlib.h>

int SumEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum = iSum + Arr[iCnt];
        }       
    }
    return iSum;
}

int main()
{
    
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;
    int iRet = 0;

    //step 1 : accept the no of elements
    printf("enter number of Elements : \n");
    scanf("%d",&iLenght);

    //step 2: allocate the memory
    Brr = (int *)malloc(iLenght * sizeof(int));    

    //step 3: accept the values from user
    printf("Enter the Elements : ");
    for(iCnt = 0; iCnt<iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //step 4 : Use the memory (logic)
    iRet = SumEven(Brr,iLenght);
    printf("Even elements Summation : %d\n",iRet);

    //step 5: Deallocate the memory
    free(Brr);

    return 0;
}