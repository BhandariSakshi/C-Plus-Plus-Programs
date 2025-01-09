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

        bool Search(int iNo)
        {
            int i = 0;
            bool bFlag = false;

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] == iNo)
                {
                    bFlag = true;
                    break;
                }
            }
            return bFlag;            
        }
};

int main()
{
    int iCount = 0, i = 0, iValue = 0;
    bool bRet = false;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    cout << "Enter the number of which you want to find: " << endl;
    cin >> iValue;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    bRet = obj.Search(iValue);
    if (bRet == true)
    {
        cout << iValue << " is present" << endl;
    }
    else
    {
        cout << iValue << " is not present" << endl;
    }

    return 0;
}