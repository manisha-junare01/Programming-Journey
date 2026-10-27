#include<iostream>
using namespace std;
 
int Maximum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}

int main()
{
    int iRet = 0;
    
    iRet = Maximum(21,11);
    cout<<"Max : "<<iRet<<"\n";
   
    return 0;
}