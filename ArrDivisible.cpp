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
            Arr = new int[iSize];
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

        int Divisible()
        {
            int i = 0, iCount = 0;

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] % 5 == 0)
                {
                    iCount++;
                }
                
            }
            return iCount;
        }
};


int main()
{
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.Divisible();
    cout << "Number of elements divisible by 5: " << iRet << endl;

    return 0;
}