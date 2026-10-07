#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 100 || n < 0) {
        cout << "Invalid n" << endl;
        return 1;
    }
    int arr[101];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // precompute
    int hashh[13] = {0};
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0 && arr[i] < 13) {
            hashh[arr[i]]++;
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch
        if (number < 0 || number >= 13) {
            cout << 0 << endl;
        } else {
            cout << hashh[number] << endl;
        }
    }
    return 0;
}
