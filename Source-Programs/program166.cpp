#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private:
    
    int *Arr;
    int iSize;
public:
    ArrayX()
    {
        int iSize = 5;              //characterastics initialization 
        Arr = new int[iSize];      //resource init...  
    }

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
   
   ArrayX *aobj1 = new ArrayX(); //default constructor
   ArrayX *aobj2 = new ArrayX(5);//paramater constructor
   //logic(Function call)

  //function call

   delete aobj1;       
   delete aobj2;   
  
     return 0;
}

