#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the array
    int arr[] = {1, 45, 54, 71, 76, 12};

    // Compute the sizes
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Find the maximum element
    cout << "\nMax Element = "
         << *max_element(arr, arr + n) << endl;

    cout << "\nMinimum  Element = "
         << *min_element(arr, arr + n);

    return 0;
}
