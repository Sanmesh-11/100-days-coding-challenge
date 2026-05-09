#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int min_cost(const vector<int>& v) {

    int n = v.size();

    // DP array
    vector<int> dp(n);

    // Starting point
    dp[0] = 0;

    // Fill dp array
    for(int i = 1; i < n; i++) {

        // Initialize with large value
        dp[i] = INT_MAX;

        // Jump from i-1
        dp[i] = min(dp[i],
                    dp[i-1] + abs(v[i] - v[i-1]));

        // Jump from i-2
        if(i > 1) {
            dp[i] = min(dp[i],
                        dp[i-2] + abs(v[i] - v[i-2]));
        }

        // Jump from i-3
        if(i > 2) {
            dp[i] = min(dp[i],
                        dp[i-3] + abs(v[i] - v[i-3]));
        }
    }

    // Minimum cost to reach last index
    return dp[n-1];
}

int main() {

    int n;
    cin >> n;

    vector<int> v(n);

    // Input array
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Function call
    int result = min_cost(v);

    // Print answer
    cout << result << endl;

    return 0;
}