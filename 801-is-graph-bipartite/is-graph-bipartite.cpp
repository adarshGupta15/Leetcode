class Solution {
public:

    bool checkBipartiteDFS(vector<vector<int>>& adj, int curr,
                           vector<int>& color, int currcolor) {

        color[curr] = currcolor;

        // Adjacent nodes par jaate hain
        for (int& v : adj[curr]) {

            // Same color mila -> Not Bipartite
            if (color[v] == color[curr]) {
                return false;
            }

            // Agar node abhi colored nahi hai
            if (color[v] == -1) {

                int colorofv = 1 - currcolor;

                if (checkBipartiteDFS(adj, v, color, colorofv) == false) {
                    return false;
                }
            }
        }

        return true;
    }


    bool isBipartite(vector<vector<int>>& graph) {

        int v = graph.size();

        vector<int> color(v, -1);

        // red = 1
        // green = 0

        for (int i = 0; i < v; i++) {

            if (color[i] == -1) {

                if (checkBipartiteDFS(graph, i, color, 1) == false) {
                    return false;
                }
            }
        }

        return true;
    }
};