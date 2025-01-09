# include <iostream>
using namespace std;
# include <vector>

vector<int> PairSum(vector<int> nums, int iTarget)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i]+nums[j] == iTarget)
            {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
            
        }
        
    }
    return ans;
}

int main()
{
    vector<int>num = {2,7,11,15};
    int target = 9;

    vector<int> ans = PairSum(num, target);

    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}