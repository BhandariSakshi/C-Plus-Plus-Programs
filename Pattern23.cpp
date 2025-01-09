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
    char ch = '\0';

    for ( i = 1, ch = 'A'; i <= iNo; i++, ch++)
    {
        cout << ch << "\t" << i << "\t";
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