#include <iostream>
using namespace std;

long long int compareBits(string a, string b) {
    int n = a.size();
    int m = b.size();

    long long total = 0;

    // Loop through all substrings of b
    for (int i = 0; i <= m - n; i++) {

        // Compare substring with a
        for (int j = 0; j < n; j++) {
            if (a[j] != b[i + j]) {
                total++;
            }
        }
    }

    return total;
}

int main() {
    string a, b;
    cin >> a >> b;

    cout << compareBits(a, b);

    return 0;
}