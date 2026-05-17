#include <iostream>
#include <vector>
using namespace std;

void user_logic(int n, const vector<int>& arr, int &result) {

    // Minimum element seen so far
    int minElement = arr[0];

    // Maximum difference
    int maxDifference = -1;

    // Start from second element
    for (int i = 1; i < n; i++) {

        // Find difference with minimum element
        int difference = arr[i] - minElement;

        // Update maximum difference
        if (difference > maxDifference && difference > 0) {
            maxDifference = difference;
        }

        // Update minimum element
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    result = maxDifference;
}

int main() {
    int T;
    cin >> T;

    vector<int> results(T);

    for (int t = 0; t < T; t++) {

        int N;
        cin >> N;

        vector<int> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        user_logic(N, arr, results[t]);
    }

    // Print all answers
    for (const auto &result : results) {
        cout << result << endl;
    }

    return 0;
}