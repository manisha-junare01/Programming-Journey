#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    str--;
    end = str;
}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter Strings : \n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("Updated string : %s",Arr);
    return 0;
}