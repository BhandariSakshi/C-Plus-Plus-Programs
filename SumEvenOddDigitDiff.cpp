# include <iostream>
using namespace std;

class Digits
{
    public:
        int Difference(int iNo);
};

int Digits :: Difference(int iNo)
{
    int iAns = 0, iSumE = 0, iSumO = 0, iDigit = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSumE += iDigit;
        }
        else
        {
            iSumO += iDigit;
        }
        iNo = iNo / 10;
    }

    iAns = iSumE - iSumO;

    return iAns;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Digits *obj = new Digits();

    iRet = obj->Difference(iValue);

    cout << "Difference between even and odd digit: " << iRet << endl;

    return 0;
}