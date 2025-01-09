# include <iostream>
using namespace std;

class Digit
{
    public:
        int Sum(int iNo);
};

int Digit :: Sum(int iNo)
{
    int iSum = 0, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Digit *obj = new Digit();

    iRet = obj->Sum(iValue);

    cout << "Sum of even digits: " << iRet << endl;

    return 0;

}