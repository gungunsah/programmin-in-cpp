#include <iostream>
using namespace std;
// time complexity: o(n^2)
int main()
{
    int a[50], n, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Enter element: ";
        cin >> a[i];
    }
    max = min = a[0];
    cout << "\nElements are:\n";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    cout << "\n\nLargest element = " << max;
    cout << "\nSmallest element = " << min;

    return 0;
}