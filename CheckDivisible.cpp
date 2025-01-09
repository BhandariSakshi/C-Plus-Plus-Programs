# include <iostream>
using namespace std;

class CheckDivisible
{
    public:
        bool Check(int iNo);
};

bool CheckDivisible :: Check(int iNo)
{
    if ((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int ivalue = 0;
    bool bRet = false;

    cout << "Enter the number: " << endl;
    cin >> ivalue;

    CheckDivisible *obj = new CheckDivisible();

    bRet = obj->Check(ivalue);

    if (bRet == true)
    {
        cout << "Number is divisible by 3 nd 5" << endl;
    }
    else
    {
        cout << "Number is not divisible by 3 nd 5" << endl;
    }

    return 0;
}