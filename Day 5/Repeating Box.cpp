#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;

    int arr[size];

    // Input array elements
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Check frequency of each element
    for(int i = 0; i < size; i++) {

        int count = 0;

        for(int j = 0; j < size; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }
        }

        // Repeated element found
        if(count > 1) {
            cout << arr[i];
            break;
        }
    }

    return 0;
}