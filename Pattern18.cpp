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
    char ch = 'A';

    if (iNo < 1)
    {
        iNo = -iNo;
    }
    for ( i = 1; i <= iNo; i++)
    {
        cout << ch << "\t";
        ch++;
    }
   
}

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Pattern *obj = new Pattern();

    obj->Display(iValue);

    return 0;
}