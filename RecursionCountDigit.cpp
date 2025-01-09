# include <iostream>
using namespace std;

int DigitCount(int iNo)
{
    static int iCount = 0;

    if(iNo > 0)
    {
        iNo = iNo/10;
        iCount++;
        DigitCount(iNo);
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    iRet = DigitCount(iValue);
    cout << "Number of digits: " << iRet << endl;

    return 0;
}