#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private:
    
    int *Arr;
    int iSize;

//parameterize constructor with default argument.
public:
ArrayX(int X=5)
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
   
   ArrayX *aobj1 = new ArrayX(); //parametirize constructor
   ArrayX *aobj2 = new ArrayX(15);//paramater constructor
   //logic(Function call)

  //function call

   delete aobj1;       
   delete aobj2;   
  
     return 0;
}

