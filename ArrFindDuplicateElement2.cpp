# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

class ArrayX
{
    private:
    int *Arr = NULL;
    int iSize = 0;

    public:
    ArrayX(int iCount);
    ~ArrayX();
    void Accept();
    int FindDuplicate();

};

ArrayX :: ArrayX(int iCount)
{
    iSize = iCount;

    Arr = new int[iCount];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
        cout << "Enter elements: " << endl;
        for (int i = 0; i < iSize; i++) {
            cin >> Arr[i];
        }
    
}

int ArrayX :: FindDuplicate()
{
    sort(Arr, Arr+1);

    for(int i = 0; i < iSize; i++)
    {
        if (Arr[i] == Arr[i+1])
        {
            return Arr[i];
        }
        
    }
    return -1;
}

int main()
{
    int iLength = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iLength;

    ArrayX obj = ArrayX(iLength);
    obj.Accept();
    iRet = obj.FindDuplicate();

    if (iRet == -1)
    {
        cout << "There is no duplicate element" << endl;
    }
    else
    {
        cout << "Duplicate element is: " << iRet << endl;
    }
    
    return 0;

}