#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> gain(n);
    for (int i = 0; i < n; i++) {
        cin >> gain[i];
    }

    int current_altitude = 0;
    int max_altitude = 0;

    for (int i = 0; i < n; i++) {
        current_altitude += gain[i];
        if (current_altitude > max_altitude) {
            max_altitude = current_altitude;
        }
    }

    cout << max_altitude << endl;

    return 0;
}