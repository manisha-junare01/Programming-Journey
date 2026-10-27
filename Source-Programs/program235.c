#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Jay Ganesh";
    int iRet = 0;

    iRet = strlen(str);

    printf("Lenght of string is : %d\n",iRet);

    iRet = sizeof(str);

    printf("Size of String is : %d\n",iRet);
    return 0;
}

/*output
Lenght of string is : 10
Size of String is : 11
*/