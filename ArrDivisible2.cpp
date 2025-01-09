# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr = NULL;
        int iSize = 0;

    public:
        ArrayX(int iNo);
        ~ArrayX();
        void Accept();
        int Divisible();
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor: " << endl;
    iSize = iNo;
    Arr = new int[iNo];
}

ArrayX :: ~ArrayX()
{
    cout << "Inside destructor: " << endl;
    delete []Arr; 
}

void ArrayX :: Accept()
{
    int i = 0;
    for ( i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

int ArrayX :: Divisible()
{
    int i = 0, iCount = 0;
    for ( i = 0; i < iSize; i++)
    {
        if ((Arr[i] % 5 == 0) && (Arr[i] % 3 == 0))
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.Divisible();
    cout << "Number of elements divisible by 5 and 3: " << iRet << endl;


    return 0;
}