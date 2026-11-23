class Solution {
public:
    vector<vector<int>>adj;
    vector<int>op;
    vector<int>score;
    long long dfs(int u){
        if(adj[u].empty()) return score[u];

        vector<long long>child;
        long long total=score[u];

        for(int v:adj[u]){
            long long cur=dfs(v);
            child.push_back(cur);

            total+=cur;
        }
        if(op[u]==0){
            long long ans=total;
            for(auto x:child){
                ans=max(ans,total-x);
            }
            return ans;
        }
        else{
            long long ans=LLONG_MIN;
            for(auto x:child){
                ans=max(ans,total-x);
            }
            return ans;
        }
    }
    int maxScore(vector<int>& parent, vector<int>& op, vector<int>& score) {
        this->op=op;
        this->score=score;
        int n=parent.size();
        adj.assign(n,{});

        for(int i=1;i<n;i++){
            adj[parent[i]].push_back(i);
        }
        return dfs(0);
    }
};