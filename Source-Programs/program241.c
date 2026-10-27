#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);   //^ negate symbol ult kam krt

    printf("Entered string is : %s\n",Arr);

    return 0;
}
