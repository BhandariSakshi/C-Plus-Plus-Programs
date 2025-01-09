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
        void Display();

        void Reverse();
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor" << endl;
    iSize = iNo;
    Arr = new int[iNo];
}

ArrayX :: ~ArrayX()
{
    cout << "\nInside destructor" << endl;
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

void ArrayX :: Display()
{
    int i = 0;
    
    for ( i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\t";
    }
}

void ArrayX :: Reverse()
{
    int iStart = 0, iEnd = 0, temp = 0;

    iEnd = iSize-1;

    while (iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
    
    
}

int main()
{
    int iCount = 0, i = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    cout << "Array before reversing: " << endl;
    obj.Display();
    obj.Reverse();
    cout << "\nArray after reversing: " << endl;
    obj.Display();

    return 0;
}