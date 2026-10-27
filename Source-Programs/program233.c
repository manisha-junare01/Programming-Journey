#include<stdio.h>

int main()
{
    char str[] = {'J', 'a', 'y', '\0', 'G', 'a', 'n', 'e', 's', 'h', '\0'};

    printf("%s",str); //%s format specifier : Display all character till first \0
    return 0;
}