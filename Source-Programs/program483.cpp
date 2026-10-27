#include<iostream>
using namespace std;

void Display(double Arr[], int size)
{

    for(int i =0; i < size; i++)
    {
        cout<<Arr[i]<<"  ";
    }
}

double Summation(double Arr[], int size)
{
    double sum = 0;

    for(int i =0; i < size; i++)
    { 
        sum = sum + Arr[i];
    }
    cout<<"\nSum : "<<sum<<"\n";
}

int main()
{
    double Brr[] = {10.2, 20.2, 30.2, 40.2, 50.3};
    
    Display(Brr , 5);
    Summation(Brr, 5);
   
    return 0;
}