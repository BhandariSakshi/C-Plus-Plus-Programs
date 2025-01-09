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
            cout << "Inside constructor" << endl;

            iSize = iNo;

            Arr = new int[iNo];
        }

        ~ArrayX()
        {
            cout << "Inside destructor" << endl;

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

        int SingleNumber()
        {
            int iAns = 0, i = 0;

            for ( i = 0; i < iSize; i++)
            {
                iAns = iAns ^ Arr[i];
            }
            return iAns;
        }

};

int main()
{
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.SingleNumber();
    cout << "Single or unique number is: " << iRet << endl;


    return 0;
}