class Solution {
public:
    bool iscycleDFS(vector<vector<int>>& adj, int u, vector<bool>& visited,
                    vector<bool>& inrecursion) {
        visited[u] = true;
        inrecursion[u] = true;

        for (int& v : adj[u]) {
            // If not visited , then we check for cycle in DFS
            if (visited[v] == false && iscycleDFS(adj, v, visited, inrecursion))
                return true;
            else if (inrecursion[v] == true)
                return true;
        }
        inrecursion[u] = false;
        return false;
    };

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<bool> visited(v, false);
        vector<bool> inrecursion(v, false);

        for (int i = 0; i < v; i++) {
            if (!visited[i])
                iscycleDFS(graph, i, visited, inrecursion);
        }
        vector<int> SafeNodes;
        for (int i = 0; i < v; i++) {
            if (inrecursion[i] == false) {
                SafeNodes.push_back(i);
            }
        }
            return SafeNodes;
        }
    
    };