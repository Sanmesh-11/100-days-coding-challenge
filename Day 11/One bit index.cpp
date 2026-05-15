#include <iostream>
#include <vector>

using namespace std;

int count_good_indices(int n, vector<int> &arr) {

    int sum = 0;
    int count = 0;

    // Traverse the array
    for (int i = 0; i < n; i++) {

        // Add current element to prefix sum
        sum = sum + arr[i];

        // Check if sum has exactly one bit set
        if (sum > 0 && (sum & (sum - 1)) == 0) {
            count++;
        }
    }

    return count;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Function call
    int result = count_good_indices(n, arr);

    // Print result
    cout << result << endl;

    return 0;
}