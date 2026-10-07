#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<sstream>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> charToIndex;
        unordered_map<string, int> wordToIndex;

        stringstream ss(s);
        string token;

        int countTokens = 0;
        int i = 0;
        int n = pattern.size();

        while (ss >> token) {
            countTokens++;

            if (i == n || charToIndex[pattern[i]] != wordToIndex[token])
                return false;

            charToIndex[pattern[i]] = i + 1;
            wordToIndex[token] = i + 1;

            i++;
        }

        return countTokens == n;
    }
};

int main() {
    Solution sol;

    // Test case 1
    string pattern1 = "abba";
    string s1 = "dog cat cat dog";
    cout << "Test 1: " << (sol.wordPattern(pattern1, s1) ? "true" : "false") << " (expected: true)" << endl;

    // Test case 2
    string pattern2 = "abba";
    string s2 = "dog cat cat fish";
    cout << "Test 2: " << (sol.wordPattern(pattern2, s2) ? "true" : "false") << " (expected: false)" << endl;

    // Test case 3
    string pattern3 = "aaaa";
    string s3 = "dog cat cat dog";
    cout << "Test 3: " << (sol.wordPattern(pattern3, s3) ? "true" : "false") << " (expected: false)" << endl;

    // Test case 4
    string pattern4 = "abba";
    string s4 = "dog dog dog dog";
    cout << "Test 4: " << (sol.wordPattern(pattern4, s4) ? "true" : "false") << " (expected: false)" << endl;

    return 0;
}