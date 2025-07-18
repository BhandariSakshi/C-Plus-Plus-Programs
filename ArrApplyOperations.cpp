//You are given a 0-indexed array nums of size n consisting of non-negative integers.

//You need to apply n - 1 operations to this array where, in the ith operation (0-indexed), you will apply the following on the ith element of nums:

//If nums[i] == nums[i + 1], then multiply nums[i] by 2 and set nums[i + 1] to 0. Otherwise, you skip this operation.
//After performing all the operations, shift all the 0's to the end of the array.

//For example, the array [1,0,2,0,0,1] after shifting all its 0's to the end, is [1,2,1,0,0,0].
//Return the resulting array.

//Note that the operations are applied sequentially, not all at once.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        vector<int> result;
        for (int num : nums) {
            if (num != 0) {
                result.push_back(num);
            }
        }

        while (result.size() < n) {
            result.push_back(0);
        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    vector<int> result = sol.applyOperations(nums);

    cout << "Result after applying operations:\n";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
