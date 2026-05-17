#include <iostream>
using namespace std;

// Function to find GCD using Euclidean Algorithm
long long gcd(long long a, long long b) {

    while (b != 0) {

        long long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Function to find required answer
long long compute_x(long long p, long long n) {

    // Find GCD
    long long gcdValue = gcd(p, n);

    // Find LCM
    long long lcm = (p * n) / gcdValue;

    return lcm;
}

int main() {

    long long p, n;

    cin >> p >> n;

    // Call function
    long long result = compute_x(p, n);

    // Print answer
    cout << result << endl;

    return 0;
}