#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh"; //char str[] = "Ganesh";
    int iCount = 0;

     printf("Lentgh of str is : %lu\n",strlen(str));
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        iCount++;
        str++;
    }

    printf("Lenght of program : %d\n",iCount);
   
    return 0;
}
