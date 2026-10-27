#include<iostream>
using namespace std;

template <class X>
 
X Maximum(X No1, X No2, X No3)
{
    X Ans;
    if(No1 < No2 && No2 > No3)
    {
        return No2;
    }
    else if(No1 > No3 && No1 > No2)
    {
        return No1;
    }
    else{
        return No3;
    }
    return Ans;
}
int main()
{
    
    cout<<"Max : "<<Maximum(21,11,31)<<"\n";
    cout<<"Max : "<<Maximum(21.5f,11.5f,32.4f)<<"\n";
    cout<<"Max : "<<Maximum(21.5,65.5,44.4)<<"\n";
   
    return 0;
}