# include <iostream>
using namespace std;

class Digit
{
    public:
        int Reverse(int iNo);
};

int Digit :: Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev*10) + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Digit *obj = new Digit();

    iRet = obj->Reverse(iValue);

    cout << iRet << endl;

    return 0;
}