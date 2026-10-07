#include<iostream>
using namespace std;
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)
            return "1";
        string say = countAndSay(n-1);
        // Processing
        string result = "";
        for (int i = 0; i < say.length(); i++) {
            char ch = say[i];
            int count = 1;
            while (i < say.length()-1 && say[i] == say[i+1]) {
                count++;
                i++;
            }
            result += to_string(count) + string(1, ch);
        }
        return result;
    }
};
int main() {
    int n;
    cout << "n ka value enter karo: ";
    cin >> n;
    Solution sol;
    string ans = sol.countAndSay(n);
    cout << "countAndSay(" << n << ") = " << ans << endl;
    return 0;
}