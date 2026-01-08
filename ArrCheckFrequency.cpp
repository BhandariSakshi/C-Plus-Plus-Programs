# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize = 0;
        int *Arr = NULL;
    
    public:
        ArrayX(int iNum);
        ~ArrayX();
        void Accept();
        void DisplayFrequency();
};

ArrayX :: ArrayX(int iNum)
{
    iSize = iNum;

    Arr = new int[iNum];
}

ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout << "Enter the elements: " << endl;
    
    for(int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void ArrayX :: DisplayFrequency()
{
    int newArr[iSize];
    int newSize = 0;

    for(int i = 0; i < iSize; i++)
    {
        int iCnt = 0;

        for(int j = 0; j <= i; j++)
        {
            if(Arr[i] == Arr[j])
            {
                iCnt++;
            }
        }
        if(iCnt == 1)
        {
            newArr[newSize] = Arr[i];
            newSize++;
        }
    }

    for(int i = 0; i < newSize; i++)
    {
        int iFreq = 0;
        for(int j = 0; j < iSize; j++)
        {
            if(newArr[i] == Arr[j])
            {
                iFreq++;
            }
        }
        cout << newArr[i] << " occurs " << iFreq << " times " << endl;
    }
}

int main()
{
    int iCount = 0;

    cout << "Enter the number of elements you want to store" << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();
    obj->DisplayFrequency();

    return 0;
}