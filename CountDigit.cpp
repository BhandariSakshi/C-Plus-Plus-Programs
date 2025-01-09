# include <iostream>
using namespace std;

class CountDigits
{
    public:
        void Display(int iNo);
        int Count(int iNo);
};

void CountDigits :: Display(int iNo)
{
    int iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        cout << iDigit << endl;

        iNo = iNo / 10;

    }
    
}

int CountDigits :: Count(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    CountDigits *obj = new CountDigits();

    obj->Display(iValue);
    iRet = obj->Count(iValue);

    cout << "Number of digits are: " << iRet << endl;

    return 0;

}