#include <iostream>
#include <queue>
using namespace std;

int main() {

    int n;
    cin >> n;

    queue<int> q;

    int time;
    int maxSize = 0;

    for (int i = 0; i < n; i++) {

        cin >> time;

        // Remove old submissions
        while (!q.empty() && time - q.front() > 5000) {
            q.pop();
        }

        // Add current submission
        q.push(time);

        // Update maximum size
        if (q.size() > maxSize) {
            maxSize = q.size();
        }
    }

    cout << maxSize;

    return 0;
}