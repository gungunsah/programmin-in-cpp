#include <iostream>
#include<vector>
#include<unordered_map>
#include<sstream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int MOD = 1e9+7;

    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();

        sort(begin(arr), end(arr));

        unordered_map<int, long long> mp;
        mp[arr[0]] = 1;

        for(int i = 1; i < n; i++) {
            int root = arr[i];
            mp[root] = 1;

            for(int j = 0; j<i; j++) {

                int LC = arr[j];

                //RC = arr[i]/LC
                if(root%LC == 0 && mp.find(arr[i]/LC) != mp.end()) {
                    mp[root] += (mp[LC] * mp[arr[i]/LC]) % MOD;
                    mp[root] %= MOD;
                }

            }

        }

        long long result = 0;
        for(auto& p : mp) {
            result = (result + p.second) % MOD;
        }

        return (int)result;
    }
};

int main() {
    int n;
    cout << "Enter n (number of elements): ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " distinct array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    int result = sol.numFactoredBinaryTrees(arr);

    cout << "Number of factored binary trees: " << result << endl;

    return 0;
}