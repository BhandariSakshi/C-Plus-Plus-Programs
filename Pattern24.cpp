# include <iostream>
using namespace std;

class Pattern
{
    public:
        void Display();
};

void Pattern :: Display()
{
    int i = 0;

    for ( i = 1; i <= 4; i++)
    {
        cout << "*\t";
    }
    cout << endl;
    for ( i = 1; i <= 4; i++)
    {
        cout << "*\t";
    }
    cout << endl;
    for ( i = 1; i <= 4; i++)
    {
        cout << "*\t";
    }
    cout << endl;
}

int main()
{
    Pattern *obj = new Pattern();

    obj->Display();

    return 0;
}