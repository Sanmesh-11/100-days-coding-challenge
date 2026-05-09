#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int calculate_golden_value(vector<int>& arr, int n) {

    int SE = 0; // Sum of even-length subarray XORs
    int SO = 0; // Sum of odd-length subarray XORs

    // Generate all subarrays
    for (int i = 0; i < n; i++) {

        int xorValue = 0;

        for (int j = i; j < n; j++) {

            // Calculate XOR
            xorValue = xorValue ^ arr[j];

            // Length of current subarray
            int length = j - i + 1;

            // Check even or odd length
            if (length % 2 == 0) {

                SE = SE + xorValue;
            }
            else {

                SO = SO + xorValue;
            }
        }
    }

    // Return absolute difference
    return abs(SE - SO);
}

int main() {

    int n;

    cin >> n;

    vector<int> arr(n);

    // Input array
    for (int i = 0; i < n; i++) {

        cin >> arr[i];
    }

    int result = calculate_golden_value(arr, n);

    cout << result << endl;

    return 0;
}