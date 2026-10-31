
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int x : nums) {
            if (s.find(x) != s.end()) {
                return true;
            }
            s.insert(x);
        }

        return false;
    }
};

int main() {
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    if (obj.containsDuplicate(nums)) {
        cout << "Duplicate element found!" << endl;
    }
    else {
        cout << "No duplicate element found!" << endl;
    }

    return 0;
}
