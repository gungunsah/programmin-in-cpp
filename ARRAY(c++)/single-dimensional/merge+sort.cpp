#include <iostream>
using namespace std;
// time complexity: o(n^2)
int main()
{
    int a[50], b[50], c[100];
    int i, j, n, m, t, temp;
    cout << "Enter number of elements for array A: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "Enter element: ";
        cin >> a[i];
    }
    cout << "Enter number of elements for array B: ";
    cin >> m;
    for (i = 0; i < m; i++){
        cout << "Enter element: ";
        cin >> b[i];
    }
    // Sort array A
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // Sort array B
    for (i = 0; i < m - 1; i++){
        for (j = i + 1; j < m; j++){
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    // Merge arrays
    i = 0;
    j = 0;
    t = 0;
    while (i < n && j < m){
        if (a[i] > b[j])
            c[t++] = b[j++];
        else
            c[t++] = a[i++];
    }
    while (i < n)
        c[t++] = a[i++];

    while (j < m)
        c[t++] = b[j++];

    cout << "\nSorted Array A:\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n\nSorted Array B:\n";
    for (i = 0; i < m; i++)
        cout << b[i] << " ";

    cout << "\n\nMerged Array C:\n";
    for (i = 0; i < t; i++)
        cout << c[i] << " ";

    return 0;
}