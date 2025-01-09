#include <iostream>
#include <vector>

using namespace std;

class Vectors {
public:
    int MajorityElement(vector<int>& nums) {
        int n = nums.size();

        int iFreq = 0, Max = 0;

        for (int i = 0; i < n; i++)
        {
            if (iFreq == 0)
            {
                Max = nums[i];
            }

            if (Max == nums[i])
            {
                iFreq++;
            }
            else
            {
                iFreq--;
            }
            
            
        }
        return Max;
        
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
