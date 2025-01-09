# include <iostream>
using namespace std;

class Number
{
    public:
        int Difference(int iNo);
};

int Number :: Difference(int iNo)
{
    int iAns = 0, iSumF = 0, iSumN = 0, i = 0;

    for ( i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumF += i;
        }
        else
        {
            iSumN += i;
        }
    }
    iAns = iSumN - iSumF;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Number *obj = new Number();

    iRet = obj->Difference(iValue);
    cout << "Difference between Non factors and factors: " << iRet << endl;

    return 0;
}