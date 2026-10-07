#include<iostream>
#include<cstring>      
#include<algorithm>
using namespace std;
class Solution {
public:
    int m, n;
    int t[501][501];
    int solve(string& s1, string& s2, int m, int n) {

        // Base case: agar ek string khatam ho gayi
        if (m == 0 || n == 0) {
            return m + n;
        }

        // Agar already calculate ho chuka hai to seedha return karo
        if (t[m][n] != -1) {
            return t[m][n];
        }

        // Agar last characters match kar rahe hain
        if (s1[m-1] == s2[n-1]) {
            return t[m][n] = solve(s1, s2, m-1, n-1);
        } else {
            int insertC  = 1 + solve(s1, s2, m, n-1);
            int deleteC  = 1 + solve(s1, s2, m-1, n);
            int replaceC = 1 + solve(s1, s2, m-1, n-1);

            return t[m][n] = min({insertC, deleteC, replaceC});
        }

        return -1;
    }

    int minDistance(string s1, string s2) {
        m = s1.length();
        n = s2.length();

        // Memoization table ko -1 se fill karna zaroori hai
        memset(t, -1, sizeof(t));

        return solve(s1, s2, m, n);
    }
};

int main() {
    string s1, s2;

    cout << "Pehli string (s1) enter karo: ";
    cin >> s1;

    cout << "Dusri string (s2) enter karo: ";
    cin >> s2;

    Solution sol;
    int ans = sol.minDistance(s1, s2);

    cout << "Minimum edit distance = " << ans << endl;

    return 0;
}