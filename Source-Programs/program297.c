#include<stdio.h>

//Call by value

void swap(int iNo1, int iNo2)
{
    int temp = 0;

    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;

    
}

int main()
{
    int i = 11;
    int j = 21;

    swap(i, j);

    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}