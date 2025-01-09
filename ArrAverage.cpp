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
        float Average();
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor" << endl;

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

    cout << "Enter the elements: " << endl;

    for ( i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
    
}

float ArrayX :: Average()
{
    int i = 0, iSum = 0;
    float Average = 0.0f;

    for ( i = 0; i < iSize; i++)
    {
        iSum += Arr[i];
    }

    Average = (float)iSum / (float)iSize;

    return Average;
    
}

int main()
{
    int iCount = 0;
    float fRet = 0.0f;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();

    fRet = obj->Average();
    cout << "Average is: " << fRet << endl;

    return 0;
}