# include <iostream>
using namespace std;

class Pattern
{
    public:
        void Display();
};

void Pattern :: Display()
{
    int i = 0, j = 0;

    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
    
}

int main()
{
    Pattern *obj = new Pattern();

    obj->Display();

    return 0;
}