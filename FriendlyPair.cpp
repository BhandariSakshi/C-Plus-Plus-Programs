# include <iostream>
using namespace std;

int getFactorsSum(int iNum)
{
    int iSum = 0;

    for(int i = 1; i < iNum; i++)
    {
        if(iNum % i == 0)
        {
            iSum += i;
        }
    }

    return iSum;
}

int main()
{
    int Num1 = 0, Num2 = 0;
    int iRet1 = 0, iRet2 = 0;

    cout << "Enter the first Number" << endl;
    cin >> Num1;

    cout << "Enter the second Number" << endl;
    cin >> Num2;

    iRet1 = getFactorsSum(Num1);
    iRet2 = getFactorsSum(Num2);

    if((iRet1 / Num1) == (iRet2 / Num2))
    {
        cout << "It is a Friendly Pair" << endl;
    }
    else
    {
        cout << "It is not a Friendly pair" << endl;
    }

    return 0;
}