# include <iostream>
using namespace std;

class EvenDigit
{
    public:
        int Count(int iNo);
};

int EvenDigit :: Count(int iNo)
{
    int iDigit = 0, iCount = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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

    EvenDigit *obj = new EvenDigit();

    iRet = obj->Count(iValue);

    cout << "Number of even digits are: " << iRet << endl;


    return 0;
}