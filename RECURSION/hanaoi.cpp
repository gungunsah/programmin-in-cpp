#include<iostream>
using namespace std;
void towerOfHanoi(int n, char s, char d, char h) {
    if (n == 1) {
        cout << " Move disk 1 from rod " << s << " to rod " << d << endl;
        return;
    }
    towerOfHanoi(n - 1, s, h, d);
    cout << " Move disk " << n << " from rod " << s << " to rod " << d << endl;
    towerOfHanoi(n - 1, h, d, s);
}
int main() {
    int n;
    cout << "\n enter the number of disks: ";
    cin >> n;
    cout << "\n The sequence of moves involved in the Tower of Hanoi are:\n\n";
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}