# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize = 0;
        int *Arr = NULL;

    public:

        ArrayX(int iNo);
        ~ArrayX();
        void Accept();
        void Reverse();
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor" << endl;

    iSize = iNo;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout << "Inside destructor" << endl;

    delete []Arr;

}

void ArrayX :: Accept()
{
    int i = 0;

    cout << "Enter elements: " << endl;

    for ( i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
    
}

void ArrayX :: Reverse()
{
    int i = 0;

    cout << "Reversed Array: " << endl;
    for ( i = iSize-1; i >= 0; i--)
    {
        cout << Arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int iCount = 0;

    cout << "Enter the number of elements that you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    obj.Reverse();

    return 0;
}