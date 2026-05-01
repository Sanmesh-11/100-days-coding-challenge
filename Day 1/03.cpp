#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string arr[1000];
    int freq[1000] = {0};
    int size = 0;

    // read strings
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int found = -1;

        // check if string already exists
        for (int j = 0; j < size; j++) {
            if (arr[j] == s) {
                found = j;
                break;
            }
        }

        if (found == -1) {
            arr[size] = s;
            freq[size] = 1;
            size++;
        } else {
            freq[found]++;
        }
    }

    int k;
    cin >> k;

    int countUnique = 0;

    // find kth unique string
    for (int i = 0; i < size; i++) {
        if (freq[i] == 1) {
            countUnique++;
            if (countUnique == k) {
                cout << arr[i];
                return 0;
            }
        }
    }

    // if not found
    cout << -1;

    return 0;
}