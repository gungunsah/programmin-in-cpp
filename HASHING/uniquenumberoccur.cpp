#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> vec(2001, 0);

        for (int &x : arr) {
            vec[x + 1000]++;
        }

        sort(begin(vec), end(vec));

        for (int i = 1; i < 2001; i++) {
            if (vec[i] != 0 && vec[i] == vec[i - 1])
                return false;
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    cout << "Test 1: " << (sol.uniqueOccurrences(arr1) ? "true" : "false") << " (expected: true)" << endl;

    // Test case 2
    vector<int> arr2 = {1, 2};
    cout << "Test 2: " << (sol.uniqueOccurrences(arr2) ? "true" : "false") << " (expected: false)" << endl;

    // Test case 3
    vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};
    cout << "Test 3: " << (sol.uniqueOccurrences(arr3) ? "true" : "false") << " (expected: true)" << endl;

    return 0;
}