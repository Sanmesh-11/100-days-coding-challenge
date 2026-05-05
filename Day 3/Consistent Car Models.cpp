#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countConsistentCars(const string& components, int n, const vector<string>& models) {

    // Step 1: Mark allowed components
    vector<bool> allowed(26, false);

    for (int i = 0; i < components.size(); i++) {
        allowed[components[i] - 'a'] = true;
    }

    int count = 0;

    // Step 2: Check each model
    for (int i = 0; i < n; i++) {
        bool isValid = true;

        for (int j = 0; j < models[i].size(); j++) {
            char ch = models[i][j];

            if (allowed[ch - 'a'] == false) {
                isValid = false;
                break;
            }
        }

        if (isValid) {
            count++;
        }
    }

    return count;
}

int main() {
    string components;
    int n;
    vector<string> models;

    getline(cin, components);
    cin >> n;

    for (int i = 0; i < n; i++) {
        string model;
        cin >> model;
        models.push_back(model);
    }

    int result = countConsistentCars(components, n, models);
    cout << result << endl;

    return 0;
}