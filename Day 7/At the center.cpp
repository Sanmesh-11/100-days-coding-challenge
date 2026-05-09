#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> points;

    // Input points
    for(int i = 0; i < n; i++) {

        int x, y;
        cin >> x >> y;

        // Calculate distance squared
        int dist = x * x + y * y;

        // Store distance and point
        points.push_back({dist, {x, y}});
    }

    int k;
    cin >> k;

    // Sort according to distance
    sort(points.begin(), points.end());

    // Print first k points
    for(int i = 0; i < k; i++) {

        cout << points[i].second.first << " "
             << points[i].second.second << endl;
    }

    return 0;
}