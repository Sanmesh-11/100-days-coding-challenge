#include <iostream>
#include <string>
using namespace std;

string follows_ab_pattern(const string& s) {
    
    bool found_b = false;

    // Traverse each character
    for (char ch : s) {

        // If character is 'b'
        if (ch == 'b') {
            found_b = true;
        }

        // If character is 'a' after finding 'b'
        if (ch == 'a' && found_b == true) {
            return "NO";
        }
    }

    // Pattern is correct
    return "YES";
}

int main() {

    string s;

    // Input string
    getline(cin, s);

    // Function call
    string result = follows_ab_pattern(s);

    // Print answer
    cout << result << endl;

    return 0;
}