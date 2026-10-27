#include<iostream>
using namespace std;

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0;

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

   delete []Brr;
  

   return 0;
}