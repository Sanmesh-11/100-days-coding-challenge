#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Case 1: Only one sheet
        if (n == 1) {
            if (s[0] == 'W')   // already blank
                cout << "YES\n";
            else               // cannot print single B or R
                cout << "NO\n";
        } else {
            bool possible = false;

            // Check adjacent pairs
            for (int i = 0; i < n - 1; i++) {
                if ((s[i] == 'B' && s[i+1] == 'R') ||
                    (s[i] == 'R' && s[i+1] == 'B')) {
                    possible = true;
                    break;
                }
            }

            if (possible)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}