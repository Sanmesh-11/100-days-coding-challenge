#include <iostream>
#include <vector>
using namespace std;

int minimum_time_to_solve_problems(int n, int k, const vector<int>& times) {

    // If no problems are given
    if (k == 0) {
        return 0;
    }

    // If no team members
    if (n == 0) {
        return -1;
    }

    // Find minimum time among all members
    int minTime = 1000000000;

    for (int i = 0; i < n; i++) {

        // Ignore zero values
        if (times[i] > 0 && times[i] < minTime) {
            minTime = times[i];
        }
    }

    // If no valid member found
    if (minTime == 1000000000) {
        return -1;
    }

    long long low = 1;

    long long high = 1LL * minTime * k;

    long long answer = -1;

    // Binary Search
    while (low <= high) {

        long long mid = (low + high) / 2;

        long long totalProblems = 0;

        // Count problems solved in 'mid' time
        for (int i = 0; i < n; i++) {

            if (times[i] > 0) {

                totalProblems += mid / times[i];
            }
        }

        // If enough problems solved
        if (totalProblems >= k) {

            answer = mid;

            // Try smaller time
            high = mid - 1;
        }
        else {

            // Need more time
            low = mid + 1;
        }
    }

    return answer;
}

int main() {

    int n, k;

    cin >> n >> k;

    vector<int> times(n);

    for (int i = 0; i < n; ++i) {

        cin >> times[i];
    }

    int result = minimum_time_to_solve_problems(n, k, times);

    cout << result << endl;

    return 0;
}