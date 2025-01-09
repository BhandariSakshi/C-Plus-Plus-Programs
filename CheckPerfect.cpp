# include <iostream>
using namespace std;

class CheckPerfect
{
    public:
        bool Check(int iNo);
};

bool CheckPerfect :: Check(int iNo)
{
    bool bFlag = false;
    int iSum = 0, i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iSum += i;
        }
    }
    if (iSum == iNo)
    {
        bFlag = true;
    }

    return bFlag;
  
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    CheckPerfect *obj = new CheckPerfect();

    bRet = obj->Check(iValue);

    if (bRet == true)
    {
        cout << "It is a perfect number" << endl;
    }
    else
    {
        cout << "It is not a perfect number" << endl;
    }


    return 0;
}