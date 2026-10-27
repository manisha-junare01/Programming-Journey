#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;  //to store first input 
    float fValue2 = 0.0f;  //to store second input
    float fResult = 0.0f;  //to store the result

    printf("Enter 1st Number : \n");
    scanf("%f",&fValue1);

    printf("Enter 2nd Number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2 ;  //perform addition
    printf("Addition is : %f\n",fResult);

    return 0;
}

