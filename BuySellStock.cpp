#include <iostream>
#include <vector>
#include <algorithm> // For std::max and std::min
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid number of days." << endl;
        return 0;
    }

    vector<int> prices(n);
    cout << "Enter the stock prices for each day: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution obj;
    int result = obj.maxProfit(prices);
    cout << "The maximum profit is: " << result << endl;

    return 0;
}
