#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n;

    cin >> n;

    // First value is always 1
    long long value = 1;

    for (int i = 0; i <= n; i++) {

        // Print current value
        cout << value;

        // Space after every number except last
        if (i != n) {
            cout << " ";
        }

        // Calculate next value
        value = value * (n - i) / (i + 1);
    }

    return 0;
}