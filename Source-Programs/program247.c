#include<stdio.h>

void strlenX(char *str) 
{
   *str = 'A';
}

int main()
{
    char Arr[50] = {'\0'};
   
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);   //^ negate symbol ult kam krt

    strlenX(Arr);
    printf("String is : %c\n",Arr);
    
    return 0;
}
