#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int give[10001] = {0};   // count how many gifts each person gives
    int receive[10001] = {0}; // count how many gifts each person receives

    // read all gift relations
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        give[a]++;      // a gives a gift
        receive[b]++;   // b receives a gift
    }

    // find youngest member
    for (int i = 1; i <= n; i++) {
        if (receive[i] == n - 1 && give[i] == 0) {
            cout << i;
            return 0;
        }
    }

    // if not found
    cout << -1;

    return 0;
}