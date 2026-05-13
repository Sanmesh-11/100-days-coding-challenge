#include <iostream>
#include <string>

using namespace std;

int user_logic(int n, string s) {

    int currentDepth = 0;
    int maxDepth = 0;

    // Traverse the string
    for (char ch : s) {

        // If opening bracket
        if (ch == '(') {

            currentDepth++;

            // Update maximum depth
            if (currentDepth > maxDepth) {
                maxDepth = currentDepth;
            }
        }

        // If closing bracket
        else if (ch == ')') {

            currentDepth--;
        }
    }

    return maxDepth;
}

int main() {

    int n;
    string s;

    cin >> n;
    cin >> s;

    int result = user_logic(n, s);

    cout << result << endl;

    return 0;
}