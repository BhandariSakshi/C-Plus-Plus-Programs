# include <iostream>
using namespace std;
# include <vector>

vector<int> PairSum(vector<int> nums, int iTarget)
{
    vector<int> ans;
    int n = nums.size();

    int Start = 0, End = n-1;

    while(Start < End)
    {
         int Pairsum = nums[Start] + nums[End];

         if (Pairsum > iTarget)
         {
            End--;
         }
         else if (Pairsum < iTarget)
         {
            Start++;
         }
         else
         {
            ans.push_back(Start);
            ans.push_back(End);
            return ans;
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