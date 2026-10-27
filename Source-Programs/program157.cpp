#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
    int *Arr;
    int iSize;
   //parametarize  
    ArrayX(int X)
{

}
//default
ArrayX()
{

}
};



int main()
{
    ArrayX aobj1(5);
    ArrayX aobj2;
  
    cout<<sizeof(aobj1)<<endl; //16bytes
    cout<<sizeof(aobj2)<<endl;
   
   return 0;
}