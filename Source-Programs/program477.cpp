#include<iostream>
using namespace std;
 
float MaximumI(float iNo1, float iNo2)
{
    float Ans;

    (iNo1 < iNo2) ? Ans = iNo2 : Ans = iNo1; //ternary operator
    return Ans;
    
}
int main()
{
    float iRet = 0;
    
    iRet = MaximumI(21.5f,11.5f);
    cout<<"Max : "<<iRet<<"\n";
   
    return 0;
}