/*
    Algorithm

    START
        Accept 1st number as No1
        accept 2nd number as NO2
        Perform addition of NO1 and NO2
        Display the result
    STOP
*/

#include<stdio.h>

int main()
{

    //variable creation with default values
    float i=0.0f,j=0.0f,k=0.0f; //if i write f its consider as float otherwise double
    printf("Enter 1st Number : \n");
    scanf("%f",&i);

    printf("Enter 2nd Number : \n");
    scanf("%f",&j);

    k=i+j;
    printf("Addition is : %f\n",k);

    return 0;
}

