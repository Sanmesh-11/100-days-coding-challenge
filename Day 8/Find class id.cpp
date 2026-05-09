#include <iostream>
#include <vector>

using namespace std;

// Function to find peak index
int peakIndexInMountainArray(vector<int>& A) {

    int n = A.size();

    // Traverse array from index 1 to n-2
    for (int i = 1; i < n - 1; i++) {

        // Check peak condition
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {

            return i;
        }
    }

    // Safety return
    return -1;
}

int main() {

    int n;

    cin >> n;

    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    // Print answer
    cout << peakIndexInMountainArray(arr);

    return 0;
}