#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
    int *Arr;
    int iSize;
    
    ArrayX(int X)//error
{

}
};



int main()
{
    ArrayX aobj;
  
    cout<<sizeof(aobj)<<endl; //16bytes
   
   return 0;
}