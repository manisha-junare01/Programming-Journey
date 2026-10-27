#include<stdio.h>
void Display(char str[]) //*str both are same 
{
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);   //^ negate symbol ult kam krt

    Display(Arr);
    
    return 0;
}
