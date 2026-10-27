#include<stdio.h>

int count(const char *str) 
{
   int iCount = 0;

   while(*str != '\0')
   {
    if(*str == 'a')
    {
        iCount++;
    }    
    str++;
   }
   return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);   //^ negate symbol ult kam krt

    iRet = count(Arr);
    printf("Frequency is : %d\n",iRet);
    
    return 0;
}
