#include <iostream>
using namespace std;

class Pattern
{
public:
    void Display(int iRow, int iCol);
};

void Pattern ::Display(int iRow, int iCol)
{
    if (iRow != iCol)
    {
        cout << "Number of rows and column is not same" << endl;
        return;
    }

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < iCol; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter the number of row: " << endl;
    cin >> iValue1;

    cout << "Enter the number of column: " << endl;
    cin >> iValue2;

    Pattern *obj = new Pattern();

    obj->Display(iValue1, iValue2);

    return 0;
}