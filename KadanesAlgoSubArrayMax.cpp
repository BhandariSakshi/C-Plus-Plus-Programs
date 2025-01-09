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
        int MaxSubarray();

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

    cout << "Enter elements: " << endl;
    for ( i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
    
}

int ArrayX :: MaxSubarray()
{
    int iMax = Arr[0];
    int CurrSum = 0;

    for (int Start = 0; Start < iSize; Start++)
    {
            CurrSum += Arr[Start];

            if (iMax < CurrSum)
            {
                iMax = CurrSum;
            }
            
            if (CurrSum < 0)
            {
                CurrSum = 0;
            }
            
    }
    return iMax;
    
}
int main()
{
    int iCount = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();

    iRet = obj->MaxSubarray();
    cout << "Maximum sum of subarray is: " << iRet << endl;

    return 0;
}