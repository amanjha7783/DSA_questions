
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // Check if lengths are different
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> freq(26, 0);

        // Count characters in s and t
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;  
            freq[t[i] - 'a']--;
        }

        // Check whether all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    Solution obj;

    if (obj.isAnagram(s, t)) {
        cout << "The strings are Anagrams!" << endl;
    }
    else {
        cout << "The strings are NOT Anagrams!" << endl;
    }

    return 0;
}
