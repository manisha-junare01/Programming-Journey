#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private:
    
    int *Arr;
    int iSize;

public:
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

   cout<<aobj->iSize<<"\n";//error

   aobj->iSize=0;          ////error
    aobj->iSize=NULL;    //error

   delete aobj;         
  
     return 0;
}

