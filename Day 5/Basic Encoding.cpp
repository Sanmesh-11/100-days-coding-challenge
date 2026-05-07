#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int q;
    cin >> q;

    int frequency[100001];

    // Initialize all frequencies to 0
    for(int i = 0; i < 100001; i++) {
        frequency[i] = 0;
    }

    int A, B;

    // Input queries
    for(int i = 0; i < q; i++) {

        cin >> A >> B;

        frequency[B] = A;
    }

    // If only one number exists
    if(q == 1) {
        cout << 0;
        return 0;
    }

    int minFreq = 100000;
    int maxFreq = 0;

    // Find minimum and maximum frequency
    for(int i = 0; i < 100001; i++) {

        if(frequency[i] > 0) {

            if(frequency[i] < minFreq) {
                minFreq = frequency[i];
            }

            if(frequency[i] > maxFreq) {
                maxFreq = frequency[i];
            }
        }
    }

    int smallestNumber = 100000;
    int largestNumber = -1;

    // Find smallest number with minimum frequency
    for(int i = 0; i < 100001; i++) {

        if(frequency[i] == minFreq) {

            if(i < smallestNumber) {
                smallestNumber = i;
            }
        }
    }

    // Find largest number with maximum frequency
    for(int i = 0; i < 100001; i++) {

        if(frequency[i] == maxFreq) {

            if(i > largestNumber) {
                largestNumber = i;
            }
        }
    }

    // Print absolute difference
    cout << abs(largestNumber - smallestNumber);

    return 0;
}