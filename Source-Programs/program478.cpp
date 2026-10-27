#include<iostream>
using namespace std;

template <class T>
 
T Maximum(T iNo1, T iNo2)
{
    T Ans;
    if(iNo1 < iNo2)
    {
        Ans = iNo2;
    }
    else
    {
        Ans = iNo1;
    }
    return Ans;
}
int main()
{
    
    cout<<"Max : "<<Maximum(21,11)<<"\n";
    cout<<"Max : "<<Maximum(21.5f,11.5f)<<"\n";
    cout<<"Max : "<<Maximum(21.5,11.5)<<"\n";
   
    return 0;
}