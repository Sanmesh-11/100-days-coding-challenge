#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void processQueries(int q, const vector<vector<string>>& queries) {

    // Stores chocolate name and quantity
    unordered_map<string, int> stock;

    // Loop through all queries
    for (int i = 0; i < q; i++) {

        string type = queries[i][0];
        string name = queries[i][1];
        int quantity = stoi(queries[i][2]);

        // Type 1 -> Add chocolates
        if (type == "1") {

            stock[name] += quantity;
        }

        // Type 2 -> Sell chocolates
        else if (type == "2") {

            // If enough chocolates available
            if (stock[name] >= quantity) {

                cout << quantity << endl;

                stock[name] -= quantity;
            }

            // If not enough chocolates
            else {

                cout << stock[name] << endl;

                stock[name] = 0;
            }
        }
    }
}

int main() {

    int q;
    cin >> q;

    vector<vector<string>> queries(q, vector<string>(3));

    // Input all queries
    for (int i = 0; i < q; ++i) {

        cin >> queries[i][0]
            >> queries[i][1]
            >> queries[i][2];
    }

    processQueries(q, queries);

    return 0;
}