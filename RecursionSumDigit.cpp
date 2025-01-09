# include <iostream>
using namespace std;

int DigitAddition(int iNo)
{
    static int iSum = 0;

    if(iNo > 0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;
        DigitAddition(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    iRet = DigitAddition(iValue);
    cout << "Sum of digits: " << iRet << endl;

    return 0;
}