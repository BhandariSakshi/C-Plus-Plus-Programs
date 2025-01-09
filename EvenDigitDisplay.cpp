# include <iostream>
using namespace std;

class EvenDigit
{
    public:
        void Display(int iNo);
};

void EvenDigit :: Display(int iNo)
{
    int iDigit = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            cout << iDigit << endl;
        }
        iNo = iNo / 10;
        
    }
    
}

int main()
{
    int iValue = 0;
    
    cout << "Enter the number: " << endl;
    cin >> iValue;

    EvenDigit obj;

    obj.Display(iValue);


    return 0;
}