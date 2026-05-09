#include <iostream>
#include <vector>

using namespace std;

// Function to calculate final XOR answer
int calculate_f_score(const vector<int>& features, int N) {

    // If size is even
    if(N % 2 == 0) {
        return 0;
    }

    // If size is odd
    int ans = 0;

    // Take XOR of even indices
    for(int i = 0; i < N; i += 2) {
        ans = ans ^ features[i];
    }

    return ans;
}

int main() {

    int N;
    cin >> N;

    vector<int> features(N);

    // Input array
    for(int i = 0; i < N; i++) {
        cin >> features[i];
    }

    // Function call
    int result = calculate_f_score(features, N);

    // Print answer
    cout << result << endl;

    return 0;
}