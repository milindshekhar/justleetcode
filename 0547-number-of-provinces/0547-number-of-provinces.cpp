class Solution {
public:
    void dfs(int node, vector<vector<int>>& adjLs, vector<int>& visited) {
        visited[node] = 1;
        for (auto it : adjLs[node]) {
            if(!visited[it])
            dfs(it, adjLs, visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<vector<int>> adjLs(isConnected.size());
        for (int i = 0; i < isConnected.size(); i++) {
            for (int j = 0; j < isConnected.size(); j++) {
                if (isConnected[i][j] == 1 && i!=j) {
                    adjLs[i].push_back(j);
                }
            }
        }
        vector<int> visited(isConnected.size(), 0);
        int count = 0;
        for(int i=0;i<isConnected.size();i++)
        {
            if (visited[i] == 0) {
                count++;
                dfs(i, adjLs, visited);
            }

        }
        return count;
    }
};