# include <iostream>
using namespace std;

class Pattern
{
    public:
        void Display(int iNo);
};

void Pattern :: Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for (i = 1; i <= iNo; i++)
    {
        cout << i << "\t" << i << "\t";
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Pattern obj;

    obj.Display(iValue);

    return 0;
}