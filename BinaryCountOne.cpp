# include <iostream>
using namespace std;

class Number
{
    public:
        int CountOne(int iNo)
        {
            int iDigit = 0, iSum = 0;

            while (iNo != 0)
            {
                iDigit = iNo % 2;
                if (iDigit == 1)
                {
                    iSum = iSum + 1;
                }
                
                iNo = iNo / 2;
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Number obj = Number();

    iRet = obj.CountOne(iValue);
    cout << "Number of ones are: " << iRet << endl;

    return 0;
}