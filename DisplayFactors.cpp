# include <iostream>
using namespace std;

class Display
{
    public:
        void DisplayFactors(int iNo);
};

void Display :: DisplayFactors(int iNo)
{
    int i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            cout << i << endl;
        }
        
    }
    
}


int main()
{
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Display *obj = new Display();

    obj->DisplayFactors(iValue);

    return 0;
}