# include <iostream>
using namespace std;

void Display(int iNo)
{
    int i = 0;

    for(i = 0; i < iNo; i++)
    {
        cout << "Jay Ganesh...." << endl;
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter the number" << endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}