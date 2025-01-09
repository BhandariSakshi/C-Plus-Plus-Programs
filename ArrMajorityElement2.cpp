#include <iostream>
#include <vector>
# include <algorithm>

using namespace std;

class Vectors
{
public:
    int MajorityElement(vector<int> &nums)
    {
        Sort(nums);
        int n = nums.size();

        int iFreq = 1, Max = nums[0];

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                iFreq++;
            }
            else
            {
                iFreq = 1;
                Max = nums[i];
            }
            if (iFreq > n / 2)
            {
                return Max;
            }
        }
    }

    void Sort(vector<int> &nums) {
            sort(nums.begin(), nums.end()); 
        }

    void Accept(vector<int> &nums, int n)
    {
        int num;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            nums.push_back(num);
        }
    }
};

int main()
{
    Vectors vecObj;
    vector<int> nums;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vecObj.Accept(nums, n);

    int result = vecObj.MajorityElement(nums);

    if (result != -1)
    {
        cout << "The majority element is: " << result << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}
