# include <iostream>
using namespace std;

class Solution
{
    public:
        double Power(double iNo, int Pow);
};

double Solution :: Power(double iNo, int Pow)
{
    double ans = 1;
    long binForm = Pow;

    if (Pow == 0)
    {
        return 1.0;
    }
    if (iNo == 1)
    {
        return 1.0;
    }
    if (iNo == 0)
    {
        return 0.0;
    }
    if (iNo == -1 && Pow%2 == 0)
    {
        return 1.0;
    }
    if (iNo == -1 && Pow%2 != 0)
    {
        return -1.0;
    }
    
    if (Pow < 0)
    {
        iNo = 1/iNo;
        binForm = -binForm;
    }
    
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= iNo;
        }
        iNo *= iNo;
        binForm /= 2;
    }
    
    return ans;
}

int main()
{
    double iValue = 0.0, iRet = 0.0;
    int iPower = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    cout << "Enter the value of power: " << endl;
    cin >> iPower;

    Solution *obj = new Solution();

    iRet = obj->Power(iValue, iPower);
    cout << "Answer is: " << iRet << endl;

    delete obj;

    return 0;
}