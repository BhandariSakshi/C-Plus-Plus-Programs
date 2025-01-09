#include <iostream>
using namespace std;

class ArrayX
{
private:
    int iSize = 0;
    int *Arr = NULL;

public:
    ArrayX(int iNo);

    void Accept();

    int Minimum();
};

ArrayX ::ArrayX(int iNo)
{
    cout << "Inside constructor" << endl;
    iSize = iNo;

    Arr = new int[iNo];
}

void ArrayX ::Accept()
{
    int i = 0;

    cout << "Enter the elements: " << endl;
    for (i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

int ArrayX ::Minimum()
{
    int i = 0, iMin = Arr[0];

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter the number of element you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();

    iRet = obj.Minimum();
    cout << "Minimum element is: " << iRet << endl;

    return 0;
}