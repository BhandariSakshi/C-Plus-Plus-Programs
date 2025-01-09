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
        void DisplayCountDigit();
        int CalculateDigits(int iValue);
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor " << endl;
    iSize = iNo;

    Arr = new int[iNo]; 
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

void ArrayX :: DisplayCountDigit()
{
    int i = 0, iRet = 0;

    for ( i = 0; i < iSize; i++)
    {
        iRet = CalculateDigits(Arr[i]);

        cout << Arr[i] << " contains " << iRet << " digits" << endl;
    }
}

int ArrayX :: CalculateDigits(int iValue)
{
    int iCount = 0;

    while (iValue != 0)
    {
        iCount++;
        iValue = iValue / 10;
    }
    return iCount;
}

int main()
{
    int iCount = 0;

    cout << "Enter the number of digits you want to store: " << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();
    obj->DisplayCountDigit();

    delete obj;

    return 0;
}