
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {

    int n, target;

    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    vector<int> result = obj.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices are: ";
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    }
    else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
