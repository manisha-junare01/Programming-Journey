#include<stdio.h>
//error do to stdlib.h

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
    for(iCnt = 0; iCnt<iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //step 4 : Use the memory (logic)

    //step 5: Deallocate the memory
    free(Brr);

    return 0;
}