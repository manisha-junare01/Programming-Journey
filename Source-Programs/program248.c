#include<stdio.h>

int strlenX(char * const str) 
{
   int iCount = 0;

   while(*str != '\0')
   {
    iCount++;
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

    iRet = strlenX(Arr);
    printf("String length is : %d\n",iRet);
    
    return 0;
}
/*

PS E:\LB\Class_Program> gcc program248.c 
program248.c: In function 'strlenX':
program248.c:10:8: error: increment of read-only parameter 'str'
     str++;
        ^~
PS E:\LB\Class_Program> 
*/