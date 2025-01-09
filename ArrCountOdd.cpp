# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize = 0;
        int *Arr = NULL;

    public:
        ArrayX(int No);
        ~ArrayX();
        void Accept();
        int Count();
};

ArrayX :: ArrayX(int No)
{
    cout << "Inside constructor" << endl;
    iSize = No;

    Arr = new int[No];
}

ArrayX :: ~ArrayX()
{
    cout << "Inside destructor" << endl;

    delete []Arr;
}

void ArrayX :: Accept()
{
    int i = 0;

    cout << "Enter the elements: " << endl;

    for ( i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
    
}

int ArrayX :: Count()
{
    int i = 0, iCount = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (Arr[i] % 2 != 0)
        {
            iCount++;
        }
        
    }
    return iCount;
}

int main()
{
    int iCount = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.Count();
    cout << "Number of odd elements: " << iRet << endl;

    return 0;
}