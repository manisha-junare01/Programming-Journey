//////////////////////////////////////////////////////////////////////////////////////
//
// Include Required header files 
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//Function Name : AddTwoNumbers
//Inpit :         float, float
//Output :        float
//Description :   Performs Addition of 2 floats
//Date :          08/05/2006
//Auther :        Manisha Gajanan Junare
//
////////////////////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                        float fNo1 ,                //first input
                        float fNo2                  //second input
                    )                
{
    float fAns = 0.0f;                              //variable to store result
    fAns = fNo1+fNo2;                               //addition
    return fAns;  
}

///////////////////////////////////////////////////////////////////////////////
//
// Aplication to Perform Addition of Two Float Values
//
///////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f;  //to store first input 
    float fValue2 = 0.0f;  //to store second input
    float fResult = 0.0f;  //to store the result

    printf("Enter 1st Number : \n");
    scanf("%f",&fValue1);

    printf("Enter 2nd Number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1, fValue2);  
    
    printf("Addition is : %f\n",fResult);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
//Input : 10.0  11.0
//Output : 21.0
//
//////////////////////////////////////////////////////////////////////////////

