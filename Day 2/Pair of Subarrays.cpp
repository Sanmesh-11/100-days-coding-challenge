#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // store all subarray sums
    vector<long long> sum;
    vector<int> start;
    vector<int> end;

    // step 1: generate all subarrays
    for (int i = 0; i < n; i++) {
        long long s = 0;
        for (int j = i; j < n; j++) {
            s += a[j];
            sum.push_back(s);
            start.push_back(i);
            end.push_back(j);
        }
    }

    int count = 0;

    // step 2: check all pairs
    for (int i = 0; i < sum.size(); i++) {
        for (int j = i + 1; j < sum.size(); j++) {

            // same sum
            if (sum[i] == sum[j]) {

                // check non-overlapping
                if (end[i] < start[j] || end[j] < start[i]) {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}