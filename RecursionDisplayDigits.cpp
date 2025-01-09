# include <iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo > 0)
    {
        cout << (iNo%10) << endl;
        iNo = iNo / 10;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}