#include <iostream>
#include <string>
using namespace std;

// Function to count unique characters
int countUnique(string str) {

    bool visited[256] = {false};

    int count = 0;

    for (int i = 0; i < str.length(); i++) {

        char ch = str[i];

        // If character not seen before
        if (visited[ch] == false) {

            visited[ch] = true;

            count++;
        }
    }

    return count;
}

void determine_winner(int N, string smit_str, string joy_str) {

    // Count unique characters
    int smit_unique = countUnique(smit_str);

    int joy_unique = countUnique(joy_str);

    // Compare counts
    if (smit_unique > joy_unique) {

        cout << "SMIT";

    } 
    else if (joy_unique > smit_unique) {

        cout << "JOY";

    } 
    else {

        cout << "TIE";
    }
}

int main() {

    int N;

    string smit_str, joy_str;

    cin >> N;

    cin >> smit_str;

    cin >> joy_str;

    determine_winner(N, smit_str, joy_str);

    return 0;
}