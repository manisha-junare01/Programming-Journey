//access specifir of summation is private thats why its occur err0r

#include<iostream>
using namespace std;

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