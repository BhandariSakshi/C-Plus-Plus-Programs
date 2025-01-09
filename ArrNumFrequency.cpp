# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize = 0;
        int *Arr = NULL;

    public:
        ArrayX(int iNo)
        {
            cout << "Inside constructor: " << endl;
            iSize = iNo;
            Arr = new int[iNo];
        }

        ~ArrayX()
        {
            cout << "Inside destructor: " << endl;
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;
            cout << "Enter the elements: " << endl;

            for ( i = 0; i < iSize; i++)
            {
                cin >> Arr[i];
            }
        }

        int Count(int iNo)
        {
            int i = 0, iFrequency = 0;

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] == iNo)
                {
                    iFrequency++;
                }
            }
            return iFrequency;            
        }
};

int main()
{
    int iCount = 0, i = 0, iRet = 0, iValue = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    cout << "Enter the number of which you want to find frequency: " << endl;
    cin >> iValue;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.Count(iValue);
    cout << "Number of " << iValue << " are " << iRet << endl;

    return 0;
}