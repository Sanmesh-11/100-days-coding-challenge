#include <iostream>
#include <string>
using namespace std;

// Function to create final string
string processString(string s) {

    string result = "";

    for(int i = 0; i < s.length(); i++) {

        // If character is '#'
        if(s[i] == '#') {

            // Remove last character if result is not empty
            if(result.length() > 0) {
                result.pop_back();
            }
        }

        // Normal character
        else {
            result += s[i];
        }
    }

    return result;
}

bool userLogic(string bob, string alice) {

    // Process both strings
    string finalBob = processString(bob);
    string finalAlice = processString(alice);

    // Compare final strings
    if(finalBob == finalAlice) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    string bob, alice;

    getline(cin, bob);
    getline(cin, alice);

    bool result = userLogic(bob, alice);

    if(result == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}