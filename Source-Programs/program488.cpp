#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
    T *Arr;
    int size;

    ArrayX(int No)
    {
        size = No;
        Arr = new T[size];
    }

    ~ArrayX()
    {
        delete [] Arr;
    }

    void Accept()
    {
        cout<<"Enter the Elements : \n";
        
        for(int i = 0; i <size;i++)
        {
            cin>>Arr[i];
        }
    }

    void Display()
    {
        cout<<"Elements of the array are : \n";
        
        for(int i = 0; i <size;i++)
        {
            cout<<"  "<<Arr[i];
        }
        cout<<"\n";
    }

    T Summation()
    {
        T sum = 0;
        
        for(int i = 0; i <size;i++)
        {
            sum = sum + Arr[i];
        }

        return sum;
        cout<<"\n";
    }
};

int main()
{
    ArrayX <int>aobj(5);


    aobj.Accept();
    aobj.Display();
    
    cout<<aobj.Summation();

    return 0;
}