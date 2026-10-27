#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    private:
    
    int *Arr;
    int iSize;
    int iCnt =0;

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


void Accept()
{
    cout<<"Enter the elemnts ..";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];

    }
}

void Display()
{
    cout<<"Enter the elemnts : ";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];

    }
}
int Summation()
{
    int iCnt=0;
    int iSum=0;
    for(iCnt =0; iCnt < iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];

    }
}

};


int main()
{
   
   ArrayX *aobj = NULL;
   int iLength = 0;
   int iRet = 0;
   
   cout<<"enter the Number of elements : ";
   cin>>iLength;

   aobj = new ArrayX(iLength);
   aobj->Accept();
   aobj->Display();
   iRet = aobj=>Summation();
   cout<<"Summtion of : "<<iRet;

   delete aobj; 

  
     return 0;
}

