#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        int maxValue = INT_MIN, allSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            allSum += nums[i];
            if (allSum > maxValue) {
                maxValue = allSum;
            }
            if (allSum < 0) {
                allSum = 0;
            }

        }
        return maxValue;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4,2};
    Solution s;
    cout << s.maxSubArray(nums) << endl;
    return 0;
}