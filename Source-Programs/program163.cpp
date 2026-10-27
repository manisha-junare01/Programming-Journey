#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
    int *Arr;
    int iSize;

ArrayX(int X)
    {
        int iSize = X;              //characterastics initialization 
        Arr = new int[iSize];      //resource init...  
    }


~ArrayX()
{
    delete []Arr;//resource deallocation
}
};

int main()
{
   
   ArrayX *aobj = new ArrayX(5);
   //logic(Function call)

   cout<<aobj->iSize<<"\n";

   aobj->iSize=0;
    aobj->iSize=NULL;    //issue

   delete aobj;         //issue
  
     return 0;
}

