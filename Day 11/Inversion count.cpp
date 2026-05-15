#include <iostream>
#include <vector>

using namespace std;

// Function to count valid pairs
int user_logic(int n, vector<int> &arr) {

    int count = 0;

    // Check every pair
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            int xor_value = arr[i] ^ arr[j];
            int and_value = arr[i] & arr[j];

            // Check condition
            if (xor_value <= and_value) {
                count++;
            }
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
    int result = user_logic(n, arr);

    // Print answer
    cout << result << endl;

    return 0;
}