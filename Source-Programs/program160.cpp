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
    int iSize = X;              //characterastics initialization 
    Arr = new int[iSize];      //resource init...
    cout<<"inside costroctor\n";

}

//Destroctor

~ArrayX()
{
    cout<<"inside Destroctor\n";
    delete []Arr;//resource deallocation

}

};

int main()
{
   //static memory allocation for object
   //ArraX aobj1(5); 
   ArrayX *aobj = new ArrayX(5);

   delete aobj;
   cout<<"End of main ...";   
    
     return 0;
}

