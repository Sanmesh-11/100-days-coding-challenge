#include <iostream>
#include <vector>
using namespace std;

int good_sum(int N, std::vector<int> &A) {
    vector<int> st;       // stack to maintain modified array
    long long totalSum = 0;

    for (int i = 0; i < N; i++) {
        int x = A[i];

        if (x >= 0) {
            st.push_back(x);
            totalSum += x;
        } else {
            int need = abs(x);
            long long removedSum = 0;

            // remove minimum elements from the end
            while (!st.empty() && removedSum < need) {
                removedSum += st.back();
                totalSum -= st.back();
                st.pop_back();
            }

            // push absolute value of x
            st.push_back(need);
            totalSum += need;
        }
    }

    return (int)totalSum;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int result = good_sum(N, A);
    cout << result << endl;
    return 0;
}