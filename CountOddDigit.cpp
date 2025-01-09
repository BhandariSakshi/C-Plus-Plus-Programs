# include <iostream>
using namespace std;

class OddDigit
{
    public:
        int Count(int iNo);
};

int OddDigit :: Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
    
}

int main()
{
    int iValue = 0, iRet = 0;
    
    cout << "Enter the number: " << endl;
    cin >> iValue;

    OddDigit *obj = new OddDigit();

    iRet = obj->Count(iValue);

    cout << "Number of odd digits are: " << iRet << endl;


    return 0;
}