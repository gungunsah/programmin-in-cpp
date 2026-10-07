#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int count = 0;
        for(int r = 0; r<n; r++) {
            for(int c = 0; c < n; c++) {
                int is_equal = true;
                for(int i = 0; i < n; i++) {
                    if(grid[r][i] != grid[i][c]) {
                        is_equal = false;
                        break;
                    }

                }

                count += is_equal;

            }

        }

        return count;
    }
};

int main() {
    int n;
    cout << "Enter n (grid size, n x n): ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));

    cout << "Enter " << n * n << " grid values (row-wise):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    int result = sol.equalPairs(grid);

    cout << "Equal row-column pairs: " << result << endl;

    return 0;
}