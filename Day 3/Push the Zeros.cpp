#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int index = 0;  // position to place non-zero

    // Step 1: move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    // Step 2: fill remaining with zero
    while (index < n) {
        arr[index] = 0;
        index++;
    }

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}