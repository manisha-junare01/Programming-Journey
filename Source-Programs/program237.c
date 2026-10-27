#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh"; //char str[] = "Ganesh";
    int iCount = 0;
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        iCount++;
        str++;
    }

    printf("Lenght of program : %d\n",iCount);

    return 0;
}
