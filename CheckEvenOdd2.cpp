# include <iostream>
using namespace std;

class Check
{

    public:
        void EvenOdd(int iNo);

};


void Check :: EvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        cout << iNo << " is an even number" << endl;
    }
    else
    {
        cout << iNo << " is an odd number" << endl;
    }
    
}

int main()
{
    Check *obj = new Check();
    int iValue = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    obj->EvenOdd(iValue);


    return 0;
}