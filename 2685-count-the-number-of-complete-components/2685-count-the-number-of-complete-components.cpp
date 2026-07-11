class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<bool>& visited,
             int node, int& edgeCount, int& nodeCount) {
        
        visited[node] = true;
        nodeCount++;
        edgeCount += adj[node].size();

        for (int nbr : adj[node]) {
            if (!visited[nbr]) {
                dfs(adj, visited, nbr, edgeCount, nodeCount);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<bool> visited(n, false);
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int nodeCount = 0;
                int edgeCount = 0;

                dfs(adj, visited, i, edgeCount, nodeCount);

                edgeCount /= 2; 

                if (edgeCount == nodeCount * (nodeCount - 1) / 2) {
                    count++;
                }
            }
        }

        return count;
    }
};