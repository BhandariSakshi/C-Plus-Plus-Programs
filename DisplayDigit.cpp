# include <iostream>
using namespace std;

class DisplayDigits
{
    public:
        void Display(int iNo);
};

void DisplayDigits :: Display(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        cout << iDigit << endl;

        iNo = iNo / 10;

    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    DisplayDigits *obj = new DisplayDigits();

    obj->Display(iValue);

    return 0;

}