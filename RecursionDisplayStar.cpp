# include <iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo > 0)
    {
        cout << "*\t";
        iNo--;
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