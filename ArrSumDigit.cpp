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
        void DisplaySumDigit();
        int SumDigits(int iValue);
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

void ArrayX :: DisplaySumDigit()
{
    int i = 0, iRet = 0;

    for ( i = 0; i < iSize; i++)
    {
        iRet =SumDigits(Arr[i]);

        cout << "Sum of " << Arr[i] << " is " << iRet << endl;

    }
}

int ArrayX :: SumDigits(int iValue)
{
    int iSum = 0;

    while (iValue != 0)
    {
        iSum = iSum + (iValue % 10);
        iValue = iValue / 10;
    }
    return iSum;
}

int main()
{
    int iCount = 0;

    cout << "Enter the number of digits you want to store: " << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();
    obj->DisplaySumDigit();

    delete obj;

    return 0;
}