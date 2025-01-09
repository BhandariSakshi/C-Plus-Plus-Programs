# include <iostream>
using namespace std;

class Solution
{
    public:
        int Update(unsigned int iNo);
};

int Solution :: Update(unsigned int iNo)
{
    unsigned int iMask = 0xffff7fff;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Solution *obj = new Solution();

    iRet = obj->Update(iValue);

    cout << "Updated number is: " << iRet << endl;
    
    delete obj;

    return 0;
}