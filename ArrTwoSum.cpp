#include <iostream>
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
    int* TwoSum(int Target);
};

ArrayX ::ArrayX(int iNo)
{
    cout << "Inside the constructor" << endl;
    iSize = iNo;
    Arr = new int[iNo];
}

ArrayX ::~ArrayX()
{
    cout << "Inside destructor" << endl;
    delete[] Arr;
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

int* ArrayX ::TwoSum(int Target)
{
    int i = 0, j = 0;
    static int Result[2];  
    for (i = 0; i < iSize - 1; i++)
    {
        for (j = i + 1; j < iSize; j++)
        {
            if (Arr[i] + Arr[j] == Target)
            {
                Result[0] = i;
                Result[1] = j;
                return Result;  
            }
        }
    }

    return NULL;  
}

int main()
{
    int iCount = 0, iValue = 0;
    int *iRet = NULL;

    cout << "Enter the target sum: " << endl;
    cin >> iValue;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);  

    obj.Accept();  

    iRet = obj.TwoSum(iValue);  

    if (iRet != NULL)
    {
        cout << "Indices: " << iRet[0] << " and " << iRet[1] << endl;
    }
    else
    {
        cout << "No two elements found with the given sum." << endl;
    }

    return 0;
}
