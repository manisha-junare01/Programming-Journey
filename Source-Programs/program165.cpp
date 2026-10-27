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
  

  //function call

   delete aobj;         
  
     return 0;
}

