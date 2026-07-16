class Solution {
public:
    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n)
            return false;
        if (j < 0 || j >= m)
            return false;
        return true;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    count++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return count;
    }
    void bfs(int i, int j, vector<vector<bool>>& vis,
             vector<vector<char>>& grid) {
        vis[i][j] = true;
        queue<pair<int, int>> q;
        q.push({i, j});
        int n = grid.size();
        int m = grid[0].size();
        int dRow[] = {-1, 0, 1, 0};
        int dCol[] = {0, 1, 0, -1};
        while (!q.empty()) {
            pair<int, int> cell = q.front();
            q.pop();
            int row = cell.first;
            int col = cell.second;

            for (int k = 0; k < 4; k++) {
                int newRow = row + dRow[k];
                int newCol = col + dCol[k];

                if (isValid(newRow, newCol, n, m) &&
                    grid[newRow][newCol] == '1' && !vis[newRow][newCol]) {

                    vis[newRow][newCol] = true;
                    q.push({newRow, newCol});
                }
            }
        }
    }
};