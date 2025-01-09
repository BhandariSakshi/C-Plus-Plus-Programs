# include <iostream>
using namespace std;

class Number
{
    public:
        void Display(int iNo)
        {
            cout << "Decimal number: " << iNo << endl;
            cout << "Octal number: " << oct << iNo << endl;
            cout << "Hexadecimal number: " << hex << iNo << endl;

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