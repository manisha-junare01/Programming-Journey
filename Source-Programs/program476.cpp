#include<iostream>
using namespace std;
 
float MaximumI(float iNo1, float iNo2)
{
    float Ans;
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
    float iRet = 0;
    
    iRet = MaximumI(21.5f,11.5f);
    cout<<"Max : "<<iRet<<"\n";
   
    return 0;
}