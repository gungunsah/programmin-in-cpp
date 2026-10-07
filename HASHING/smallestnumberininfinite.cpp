#include <iostream>
#include<sstream>
#include<set>
using namespace std;
class SmallestInfiniteSet {
public:
    int currSmallest;
    set<int> st;

    SmallestInfiniteSet() {
        currSmallest = 1;
    }

    int popSmallest() {
        int result;

        if (!st.empty()) {
            result = *st.begin();
            st.erase(st.begin());
        } else {
            result = currSmallest;
            currSmallest += 1;
        }

        return result;
    }

    void addBack(int num) {
        if (num < currSmallest) {
            st.insert(num);
        }
    }
};

int main() {
    SmallestInfiniteSet obj;

    cout << obj.popSmallest() << endl; // 1
    cout << obj.popSmallest() << endl; // 2

    obj.addBack(1);
    cout << obj.popSmallest() << endl; // 1 (added back)
    cout << obj.popSmallest() << endl; // 3

    cout << obj.popSmallest() << endl; // 4

    obj.addBack(2);
    cout << obj.popSmallest() << endl; // 2 (added back)
    cout << obj.popSmallest() << endl; // 5

    return 0;
}