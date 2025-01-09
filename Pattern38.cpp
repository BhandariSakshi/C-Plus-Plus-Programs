# include <iostream>
using namespace std;

class Pattern
{
    public:
        void Display(int iRow, int iCol);
};

void Pattern :: Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow != iCol)
    {
        cout << "Number of rows and columns should be equal" << endl;
        return;
    }
    

    for ( i = 1; i <= iRow; i++)
    {
        for ( j = 1; j <= iCol; j++)
        {
            if (i >= j)
            {
                cout << i << "\t";
            }
        }
        cout << endl;
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout << "Enter the number of rows: " << endl;
    cin >> iValue1;

    cout << "Enter the number of columns: " << endl;
    cin >> iValue2;

    Pattern *obj = new Pattern();

    obj->Display(iValue1, iValue2);

    return 0;
}