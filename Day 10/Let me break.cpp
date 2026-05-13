#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool check_if_can_break(string s1, string s2) {

    // If lengths are different
    if (s1.length() != s2.length()) {
        return false;
    }

    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    bool s1Breaks = true;
    bool s2Breaks = true;

    // Compare characters
    for (int i = 0; i < s1.length(); i++) {

        // Check if s1 can break s2
        if (s1[i] < s2[i]) {
            s1Breaks = false;
        }

        // Check if s2 can break s1
        if (s2[i] < s1[i]) {
            s2Breaks = false;
        }
    }

    // If any one is true
    return s1Breaks || s2Breaks;
}

int main() {

    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    bool result = check_if_can_break(s1, s2);

    if (result) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}