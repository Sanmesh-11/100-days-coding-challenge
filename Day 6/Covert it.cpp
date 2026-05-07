#include <iostream>
#include <vector>
using namespace std;

std::vector<int> modify_array(int n, std::vector<int> arr) {

    // Store maximum value seen till now
    int maxi = arr[0];

    // Traverse array
    for(int i = 0; i < n; i++) {

        // Update maximum value
        if(arr[i] > maxi) {
            maxi = arr[i];
        }

        // Add maximum to current element
        arr[i] = arr[i] + maxi;
    }

    // Return modified array
    return arr;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call function
    vector<int> modified_arr = modify_array(n, arr);

    // Print modified array
    for(int i = 0; i < modified_arr.size(); i++) {
        cout << modified_arr[i] << " ";
    }

    return 0;
}