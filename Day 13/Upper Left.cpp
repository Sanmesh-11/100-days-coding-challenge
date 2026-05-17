#include <iostream>
#include <vector>

using namespace std;

// DFS function
void dfs(int i, int j,
         int n, int m,
         vector<vector<int>>& grid,
         vector<vector<bool>>& visited,
         int& minRow, int& minCol,
         int& maxRow, int& maxCol) {

    // Check boundaries
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;

    // If cell is 0 or already visited
    if (grid[i][j] == 0 || visited[i][j])
        return;

    // Mark visited
    visited[i][j] = true;

    // Update boundaries
    minRow = min(minRow, i);
    minCol = min(minCol, j);

    maxRow = max(maxRow, i);
    maxCol = max(maxCol, j);

    // Visit 4 directions

    // Down
    dfs(i + 1, j, n, m, grid, visited,
        minRow, minCol, maxRow, maxCol);

    // Up
    dfs(i - 1, j, n, m, grid, visited,
        minRow, minCol, maxRow, maxCol);

    // Right
    dfs(i, j + 1, n, m, grid, visited,
        minRow, minCol, maxRow, maxCol);

    // Left
    dfs(i, j - 1, n, m, grid, visited,
        minRow, minCol, maxRow, maxCol);
}

void user_logic(int n, int m, vector<vector<int>>& grid) {

    // Visited array
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Traverse grid
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            // New water body found
            if (grid[i][j] == 1 && !visited[i][j]) {

                // Initialize boundaries
                int minRow = i;
                int minCol = j;
                int maxRow = i;
                int maxCol = j;

                // Start DFS
                dfs(i, j, n, m, grid, visited,
                    minRow, minCol, maxRow, maxCol);

                // Print answer
                cout << minRow << " "
                     << minCol << " "
                     << maxRow << " "
                     << maxCol << endl;
            }
        }
    }
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> grid[i][j];
        }
    }

    user_logic(n, m, grid);

    return 0;
}