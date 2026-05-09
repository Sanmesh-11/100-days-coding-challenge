#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> votes(n);

    int totalSum = 0;

    // Input array and calculate total sum
    for(int i = 0; i < n; i++) {
        cin >> votes[i];
        totalSum += votes[i];
    }

    // Sort in descending order
    sort(votes.begin(), votes.end(), greater<int>());

    vector<int> answer;

    int selectedSum = 0;

    // Take largest elements one by one
    for(int i = 0; i < n; i++) {

        selectedSum += votes[i];
        answer.push_back(votes[i]);

        // Check majority condition
        if(selectedSum > totalSum - selectedSum) {
            break;
        }
    }

    // Print answer
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}