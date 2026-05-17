#include <iostream>
using namespace std;

// Function to find smallest prime factor
int smallestPrimeFactor(int n) {
    
    // Check from 2 onwards
    for (int i = 2; i * i <= n; i++) {
        
        // If completely divisible
        if (n % i == 0) {
            return i;
        }
    }

    // If no factor found, number itself is prime
    return n;
}

// Function to solve the problem
int user_logic(int n) {

    // Find smallest prime factor
    int spf = smallestPrimeFactor(n);

    // If number is prime
    if (spf == n) {
        return 1;
    }

    // If number is even
    if (n % 2 == 0) {
        return n / 2;
    }

    // Odd composite number
    return 1 + (n - spf) / 2;
}

int main() {
    int n;
    cin >> n;

    int result = user_logic(n);

    cout << result << endl;

    return 0;
}