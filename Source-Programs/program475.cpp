#include<iostream>
using namespace std;
 
float MaximumI(float iNo1, float iNo2)
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
    float iRet = 0;
    
    iRet = MaximumI(21.5f,11.5f);
    cout<<"Max : "<<iRet<<"\n";
   
    return 0;
}