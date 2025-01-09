# include <iostream>
using namespace std;

class Bitwise
{
    public:
        int And(unsigned int iNo1, unsigned int iNo2);
};

int Bitwise :: And(unsigned int iNo1, unsigned int iNo2)
{
    unsigned int iResult = 0;

    iResult = iNo1 & iNo2;

    return iResult;
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout << "Enter the first number: " << endl;
    cin >> iValue1;

    cout << "Enter the second number: " << endl;
    cin >> iValue2;

    Bitwise *obj = new Bitwise();

    iRet = obj->And(iValue1, iValue2);
    cout << "Bitwise and of numbers is: " << iRet << endl;

    return 0;
}