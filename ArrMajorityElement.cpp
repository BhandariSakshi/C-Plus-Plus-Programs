#include <iostream>
#include <vector>

using namespace std;

class Vectors {
public:
    int MajorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int val : nums) {
            int freq = 0;

            for (int el : nums) {
                if (el == val) {
                    freq++;
                }
            }

            if (freq > n / 2) {
                return val;
            }
        }

        return -1;
    }

    void Accept(vector<int>& nums, int n) {
        int num;
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> num;
            nums.push_back(num);
        }
    }
};

int main() {
    Vectors vecObj;
    vector<int> nums;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vecObj.Accept(nums, n);

    int result = vecObj.MajorityElement(nums);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}
