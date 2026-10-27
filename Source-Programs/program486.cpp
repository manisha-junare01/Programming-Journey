#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int size;

    ArrayX(int No)
    {
        size = No;
        Arr = new int[size];
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
};

int main()
{
    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}