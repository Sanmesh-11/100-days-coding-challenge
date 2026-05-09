#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // Reverse the string
    reverse(s.begin(), s.end());

    // Print kth character
    cout << s[k - 1];

    return 0;
}