#include <iostream>
#include <vector>
#include <string>

using namespace std;

int user_logic(vector<string>& ops) {
    vector<int> record;  // acts like stack

    for (int i = 0; i < ops.size(); i++) {

        if (ops[i] == "+") {
            int last = record.back();
            int secondLast = record[record.size() - 2];
            record.push_back(last + secondLast);
        }
        else if (ops[i] == "D") {
            int last = record.back();
            record.push_back(last * 2);
        }
        else if (ops[i] == "C") {
            record.pop_back();
        }
        else {
            // convert string to integer
            int num = stoi(ops[i]);
            record.push_back(num);
        }
    }

    // calculate sum
    int sum = 0;
    for (int i = 0; i < record.size(); i++) {
        sum += record[i];
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<string> ops(n);

    for (int i = 0; i < n; i++) {
        cin >> ops[i];
    }

    int result = user_logic(ops);
    cout << result << endl;

    return 0;
}