//time complexity O(N) here the n<

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0; 
    int iCount = 0;
      
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]  == iNo)  
        {
            iCount++;
            break; 
        }            
    }

    if(iCount == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}

int main()
{
    
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;
    bool bRet = 0;
    int iValue = 0;

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

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    //step 4 : Use the memory (logic)
    bRet = LinearSearch(Brr,iLenght,iValue);
    printf("Linear Search : %d\n",bRet);

    if(bRet == true)
    {
        printf("Element is present ..");
    }
    else
    {
        printf("Element is Not present..");
    }

    //step 5: Deallocate the memory
    free(Brr);

    return 0;
}