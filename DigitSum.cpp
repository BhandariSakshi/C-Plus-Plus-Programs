# include <iostream>
using namespace std;

class DigitSum
{
    public:
        int Sum(int iNo);
};

int DigitSum :: Sum(int iNo)
{
    int iSum = 0;

    while (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    DigitSum *obj = new DigitSum();

    iRet = obj->Sum(iValue);

    cout << "Sum of digits: " << iRet << endl;
    
    return 0;
}