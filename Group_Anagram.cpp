
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {

            string key = s;

            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};

int main() {

    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter " << n << " strings: ";

    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    Solution obj;

    vector<vector<string>> result = obj.groupAnagrams(strs);

    cout << "\nGrouped Anagrams:\n";

    for (int i = 0; i < result.size(); i++) {

        cout << "[ ";

        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}
