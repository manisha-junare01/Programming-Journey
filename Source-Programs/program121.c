#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the array..\n");

    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

}

int main()
{
    
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;

    //step 1 : accept the no of elements
    printf("enter nu of Elements : \n");
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
    Display(Brr,iLenght);

    //step 5: Deallocate the memory
    free(Brr);

    return 0;
}