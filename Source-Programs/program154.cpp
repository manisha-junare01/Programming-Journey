//access specifir of summation is private thats why its occur err0r

#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
    int *Arr;
    int iSize;
    
};

int main()
{
    ArrayX aobj;
  
    cout<<sizeof(aobj)<<endl; //16bytes
   
   return 0;
}