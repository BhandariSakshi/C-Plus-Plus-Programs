# include <iostream>
using namespace std;

class ArrayX
{
    private:
        int iSize;
        int *Arr = NULL;

    public:
        ArrayX(int No)
        {
            cout << "Inside constructor" << endl;
            iSize = No;

            Arr = new int[No];
        }

        ~ArrayX()
        {
            cout << "\nInside destructor" << endl;

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

        void Display()
        {
            int i = 0;

            cout << "Entered elements are: " << endl;
            for ( i = 0; i < iSize; i++)
            {
                cout << Arr[i] << "\t";
            }
            
        }

        void EvenDisplay()
        {
            int i = 0;

            for ( i = 0; i < iSize; i++)
            {
                if (Arr[i] % 2 == 0)
                {
                    cout << Arr[i] << "\t";
                }
                
            }
            
        }
};


int main()
{
    int iCount = 0;

    cout << "Enter the number of elements that you want to store: " << endl;
    cin >> iCount;

    ArrayX obj = ArrayX(iCount);

    obj.Accept();
    obj.EvenDisplay();


    return 0;
}

