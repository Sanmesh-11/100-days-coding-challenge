#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    int sum = 0;

    // Add alternate elements
    for(int i = 0; i < n; i = i + 2) {
        sum = sum + arr[i];
    }

    cout << sum;

    return 0;
}