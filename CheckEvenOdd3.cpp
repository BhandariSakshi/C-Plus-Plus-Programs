# include <iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    (iValue % 2 == 0) ? cout << iValue << " is even number" : cout << iValue << " is odd number" << endl;


    return 0;
}