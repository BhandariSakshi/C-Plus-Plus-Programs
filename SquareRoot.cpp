# include <iostream>
using namespace std;

class Solution
{
    public:
    int Sqrt(int iNum)
    {
        if(iNum == 0 || iNum == 1)
        {
            return iNum;
        }
        int left = 1, right = iNum, ans = 0;

        while(left <= right)
        {
            long long mid = left + (right-left)/2;
            if(mid*mid == iNum)
            {
                return mid;
            }
            else if (mid*mid < iNum)
            {
                ans = mid;
                left = mid+1;
            }
            else
            {
                right=mid-1;
            }

        }
        return ans;
    }
    
};

int main()
{
    int iValue = 0, iRet = 0;

    cout << "Enter the number: " << endl;
    cin >> iValue;

    Solution obj;

    iRet = obj.Sqrt(iValue);
    cout << "Square root is: " << iRet << endl;

    return 0;
}