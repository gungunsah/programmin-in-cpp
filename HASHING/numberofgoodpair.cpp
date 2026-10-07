#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i = 0; i < n-1; i++) {
            int num = nums[i];
            for(int j = i+1; j<n; j++) {
                if(nums[i] == nums[j])
                    result++;

            }

        }

        return result;
    }
};

int main() {
    int n;
    cout << "Enter n (size of array): ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.numIdenticalPairs(nums);

    cout << "Number of good pairs: " << result << endl;

    return 0;
}