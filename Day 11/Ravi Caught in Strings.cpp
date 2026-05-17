#include <iostream>
#include <string>
using namespace std;

int longest_palindromic_substring_length(int n, string s) {
    
    int maxLength = 1;

    // Check palindrome for every character
    for (int i = 0; i < n; i++) {

        // -------------------------
        // Case 1: Odd Length
        // Example: aba
        // -------------------------
        int left = i;
        int right = i;

        while (left >= 0 && right < n && s[left] == s[right]) {
            
            int currentLength = right - left + 1;

            if (currentLength > maxLength) {
                maxLength = currentLength;
            }

            left--;
            right++;
        }

        // -------------------------
        // Case 2: Even Length
        // Example: cc
        // -------------------------
        left = i;
        right = i + 1;

        while (left >= 0 && right < n && s[left] == s[right]) {

            int currentLength = right - left + 1;

            if (currentLength > maxLength) {
                maxLength = currentLength;
            }

            left--;
            right++;
        }
    }

    return maxLength;
}

int main() {
    int n;
    string s;

    cin >> n >> s;

    int result = longest_palindromic_substring_length(n, s);

    cout << result << endl;

    return 0;
}