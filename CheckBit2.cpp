# include <iostream>
using namespace std;

class Solution
{
    public:
        bool CheckBit(unsigned int iNo);
};

bool Solution :: CheckBit(unsigned int iNo)
{
    int iMask = 136;
    int iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
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
    unsigned int iValue = 0;
    bool bRet = false;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Solution *obj = new Solution();

    bRet = obj->CheckBit(iValue);

    if (bRet == true)
    {
        cout << "4th and 8th bit is on" << endl;
    }
    else
    {
        cout << "4th and 8th bit is off" << endl;
    }

    delete obj;

    return 0;
}