#include<stdio.h>
void Display(char str[]) //*str both are same 
{
    printf("Input string is : %s\n",str);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);   //^ negate symbol ult kam krt

    Display(Arr);
    
    return 0;
}
