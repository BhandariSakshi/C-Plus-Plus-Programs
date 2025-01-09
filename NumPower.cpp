# include <iostream>
using namespace std;

class Number
{
    public:

        int Find(int iNo, int iPow);
};

int Number :: Find(int iNo, int iPow)
{
    int iMul = 1, iCnt = 1;

    while (iCnt <= iPow)
    {
        iMul = iMul*iNo;

        iCnt++;
    }
    
    return iMul;
}

int main()
{
    int iValue = 0, iPower = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    cout << "Enter the value of power: " << endl;
    cin >> iPower;

    Number *obj = new Number();

    iRet = obj->Find(iValue, iPower);

    cout << "Value is: " << iRet << endl;

    return 0;
}