#include <iostream>
#include <string>

using namespace std;

// Function to check prime digit
bool isPrime(int num) {

    if (num == 2 || num == 3 || num == 5 || num == 7) {
        return true;
    }

    return false;
}

void modify_string(int n, string s) {

    int sum = 0;
    int count = 0;

    // Find prime digits
    for (char ch : s) {

        if (isdigit(ch)) {

            int digit = ch - '0';

            if (isPrime(digit)) {

                sum += digit;
                count++;
            }
        }
    }

    int average = 0;

    // Calculate average
    if (count > 0) {
        average = sum / count;
    }

    // Replace digits with alphabets
    for (int i = 0; i < n; i++) {

        if (isdigit(s[i])) {

            int digit = s[i] - '0';

            int index;

            // If no prime numbers
            if (count == 0) {
                index = digit;
            }

            // If prime numbers exist
            else {
                index = digit % average;
            }

            // Convert index to alphabet
            s[i] = 'a' + index;
        }
    }

    // Print modified string
    cout << s << endl;
}

int main() {

    int n;
    string s;

    cin >> n >> s;

    modify_string(n, s);

    return 0;
}