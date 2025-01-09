# include <iostream>
using namespace std;

class Factorial
{
    public:
        int Find(int iNo);
};

int Factorial :: Find(int iNo)
{
    int iFact = 1, i = 0;

    for ( i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Factorial *obj = new Factorial();

    iRet = obj->Find(iValue);

    cout << "Factorial is: " << iRet << endl;

    return 0;

}