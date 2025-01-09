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

        void Accept()
        {
            int i = 0;

            cout << "Enter the elements: " << endl;
            for ( i = 0; i < iSize; i++)
            {
                cin >> Arr[i];
            }
        }

        int Maximum()
        {
            int i = 0, iMax = Arr[0];

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] > iMax)
                {
                    iMax = Arr[i];
                }
            }
            return iMax;
        }

};

int main()
{
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter the number of element you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();

    iRet = obj.Maximum();
    cout << "Maximum element is: " << iRet << endl;

    return 0;
}