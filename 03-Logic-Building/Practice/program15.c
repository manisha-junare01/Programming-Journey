/*
    START
        Accept no as No
        if No is completely devesible by 2
            then print even
        otherwise 
            print odd
    STOP

    START
        accept no as No 
        Divede No by 2
        if renimder is 0 
            then print as 0 
        otherwise
            print as odd
    STOP
    
*/

#include<stdio.h>

int main()
{
    int iValue=0;
    int iReminder=0;

    printf("Ener Number : \n");
    scanf("%d",&iValue);

    iReminder = iValue % 2;

    if(iReminder==0)
    {
        printf("Number is even..");
    }
    else{
        printf("Number is odd..");
    }

    /*

    if(n%2==0)
    {
        printf("Number is Even...");
    }
    else
    {
        printf("Number is Odd..");
    }
*/
return 0;
}