#include <iostream>

using namespace std;

// Function to count total set bits from 1 to N
int countOnesInBinary(int N) {

    int totalCount = 0;

    // Loop from 1 to N
    for (int i = 1; i <= N; i++) {

        int num = i;

        // Find set bits in current number
        while (num > 0) {

            // Check if last bit is 1
            if (num % 2 == 1) {
                totalCount++;
            }

            // Remove last bit
            num = num / 2;
        }
    }

    return totalCount;
}

int main() {

    int N;

    cin >> N;

    int result = countOnesInBinary(N);

    cout << result << endl;

    return 0;
}