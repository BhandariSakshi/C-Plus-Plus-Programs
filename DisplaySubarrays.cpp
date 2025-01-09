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
        void DisplaySubarray();
};

ArrayX :: ArrayX(int iNo)
{
    cout << "Inside constructor: " << endl;
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

void ArrayX :: DisplaySubarray()
{
    int Start = 0, End = 0, i = 0;

    for ( Start = 0; Start < iSize; Start++)
    {
        for ( End = Start; End < iSize; End++)
        {
            for ( i = Start; i <= End; i++)
            {
                cout << Arr[i];
            }
            cout << "\t";
        }
        cout << endl;
    }
    
}

int main()
{
    int iCount = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX *obj = new ArrayX(iCount);

    obj->Accept();
    obj->DisplaySubarray();


    return 0;
}