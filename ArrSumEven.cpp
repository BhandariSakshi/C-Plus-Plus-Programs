# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize = 0;
        int *Arr = NULL;
    
    public:
        ArrayX(int No)
        {
            cout << "Inside constructor" << endl;
            iSize = No;

            Arr =new int[No];
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

        int Sum()
        {
            int iSum = 0, i = 0;

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] % 2 == 0)
                {
                    iSum += Arr[i];
                }
            }
            return iSum;
        }

};

int main()
{
    int iCount = 0, iRet = 0, i = 0;

    cout << "Enter the number of elements that you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    iRet = obj.Sum();
    cout << "Sum of even elements is: " << iRet << endl;

    return 0;

}
