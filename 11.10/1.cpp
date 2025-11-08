#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct PathInfo {
    vector<pair<int, int>> path; 
    int totalScore;              
};

vector<pair<int, int>> reconstructPath(const vector<vector<pair<int, int>>>& parent, int n, int m) {
    vector<pair<int, int>> path;
    int i = n - 1, j = m - 1;
    while (i > 0 || j > 0) {
        path.push_back({i, j});
        int prev_i = parent[i][j].first;
        int prev_j = parent[i][j].second;
        i = prev_i;
        j = prev_j;
    }
    path.push_back({0, 0}); 
    reverse(path.begin(), path.end());
    return path;
}

PathInfo findOptimalPath(const vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, 0));

    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));
    dp[0][0] = grid[0][0];
    

    for (int j = 1; j < m; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
        parent[0][j] = {0, j-1};
    }
    

    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
        parent[i][0] = {i-1, 0};
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (dp[i-1][j] > dp[i][j-1]) {
                dp[i][j] = dp[i-1][j] + grid[i][j];
                parent[i][j] = {i-1, j};
            } else {
                dp[i][j] = dp[i][j-1] + grid[i][j];
                parent[i][j] = {i, j-1};
            }
        }
    }

    vector<pair<int, int>> path = reconstructPath(parent, n, m);
    return {path, dp[n-1][m-1]};
}

int main() {
    int n, m;
    cout << "Введите количество строк (N): ";
    cin >> n;
    cout << "Введите количество столбцов (M): ";
    cin >> m;
    
    vector<vector<int>> grid(n, vector<int>(m));
    
    cout << "Введите матрицу баллов (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    PathInfo result = findOptimalPath(grid);
    cout << "\nМаксимальная сумма баллов: " << result.totalScore << endl;
    cout << "Оптимальный маршрут:" << endl;
    
    for (const auto& point : result.path) {
        cout << point.first << " " << point.second << endl;
    }
    
    return 0;
}
