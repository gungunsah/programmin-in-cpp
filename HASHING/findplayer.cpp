#include <iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lost_map; // key : Player number, value : count of losses

        for (int i = 0; i < matches.size(); i++) {
            int loser = matches[i][1];
            lost_map[loser]++;
        }

        vector<int> notLost;
        vector<int> lostOnce;

        for (int i = 0; i < matches.size(); i++) {
            int winner = matches[i][0];
            int loser  = matches[i][1];

            if (lost_map.find(winner) == lost_map.end()) {
                notLost.push_back(winner);
                lost_map[winner] = 2;
            }

            if (lost_map[loser] == 1) {
                lostOnce.push_back(loser);
            }
        }

        sort(begin(lostOnce), end(lostOnce));
        sort(begin(notLost), end(notLost));

        return {notLost, lostOnce};
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<vector<int>> matches = {
        {1, 3}, {2, 3}, {3, 6}, {5, 6}, {5, 7}, {4, 5}, {4, 8}, {4, 9}, {10, 4}, {10, 9}
    };

    vector<vector<int>> result = sol.findWinners(matches);

    cout << "Players with no losses: ";
    for (int p : result[0]) cout << p << " ";
    cout << endl;

    cout << "Players with exactly one loss: ";
    for (int p : result[1]) cout << p << " ";
    cout << endl;

    return 0;
}