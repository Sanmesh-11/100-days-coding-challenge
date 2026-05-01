#include <iostream>
using namespace std;

int main() {
    string location;
    cin >> location;

    char col = location[0];
    int row = location[1] - '0';

    if (col == 'a' || col == 'c' || col == 'e' || col == 'g') {
        if (row % 2 == 0)
            cout << "White";
        else
            cout << "Black";
    } else {
        if (row % 2 == 0)
            cout << "Black";
        else
            cout << "White";
    }

    return 0;
}
