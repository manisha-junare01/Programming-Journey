//find largest / maximum`

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0; 
    int iMax = 0;

    iMax = Arr[0];
        
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)  
        {
            iMax = Arr[iCnt];
        }            
    }

   return iMax;
}

int main()
{
    
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;
    int iRet = 0;
    
    //step 1 : accept the no of elements
    printf("enter the number of Elements : \n");
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
    iRet = Maximum(Brr,iLenght);
    printf("Maximum Ele,ents is : %d\n",iRet);
    

    //step 5: Deallocate the memory
    free(Brr);

    return 0;
}