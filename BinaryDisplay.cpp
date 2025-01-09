# include <iostream>
using namespace std;

class Number
{
    public:
        void Display(int iNo)
        {
            int iDigit = 0;
            while (iNo != 0)
            {
                iDigit = iNo % 2;
                cout << iDigit;
                iNo = iNo / 2;
            }
            
        }
};

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Number obj = Number();

    obj.Display(iValue);

    return 0;
}