#include<stdio.h>

int Arr[7];
int main()
{
    
    Arr[0]=10;
    Arr[3]=20;
    Arr[6]=30;

    printf("%d\n",sizeof(Arr));

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[6]);

    printf("%d\n",Arr[1]); //global mdhe 0 ch bhetnar
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[4]);


    return 0;
}

/*

c:\Users\Admin\OneDrive\Desktop\LB\Class_Program>a.exe
28
10
20
30
0
0
0
*/