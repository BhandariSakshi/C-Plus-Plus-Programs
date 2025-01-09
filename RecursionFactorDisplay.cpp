# include <iostream>
using namespace std;

class Recursion
{
    public: 
        void Display(int iNo);
};

void Recursion :: Display(int iNo)
{
    static int i = 1;
    
    if (i <= (iNo/2))
    {
        if (iNo % i == 0)
        {
            cout << i << "\t";
        }
        i++;
        Display(iNo);
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Recursion *obj = new Recursion();

    cout << "Factors are: " << endl;
    obj->Display(iValue);

    return 0;
}