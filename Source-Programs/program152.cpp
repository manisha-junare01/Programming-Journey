
#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int Summation(int Arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;

}
};

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0;
   int iRet = 0;
   ArrayX aobj; //static object

   cout<<"enter the no of elements :\n";
   cin>>iLength;
   
   //C : Brr = (int*)malloc(sizeof(int))*iLenth);
   //java : Brr = new int iLength;
    Brr = new int[iLength];

   cout<<"Enter the elements : ";

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
    cin>>Brr[iCnt];
   }

   cout<<" elements of the array : ";

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
    cout<<Brr[iCnt]<<endl;
   }

   iRet = aobj.Summation(Brr , iLength);

   cout<<"summation is : "<<iRet;

   delete []Brr;  

   return 0;
}