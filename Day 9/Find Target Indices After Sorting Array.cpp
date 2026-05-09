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

    int k;
    cin >> k;

    // Sort the array
    sort(arr.begin(), arr.end());

    vector<int> indices;

    // Find indices where arr[i] == k
    for(int i = 0; i < n; i++) {

        if(arr[i] == k) {
            indices.push_back(i);
        }
    }

    // Print number of matching indices
    cout << indices.size() << endl;

    // Print indices
    for(int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }

    return 0;
}