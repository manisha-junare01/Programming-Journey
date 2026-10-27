#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh"; //char str[] = "Ganesh";
    int iRet = 0;

    iRet = strlen(str);

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;
    
    return 0;
}
