class Solution {
public:
    typedef pair<long long,int>P;
    int M=1e9+7;
    int countPaths(int n, vector<vector<int>>& roads) {
        //u->{{v1,t1},{v2,t2}}
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto &road:roads){
            int u=road[0];
            int v=road[1];
            int time=road[2];

        adj[u].push_back({v,time});
        adj[v].push_back({u,time});    
        }

        priority_queue<P,vector<P>,greater<P>>pq; //min-heap
        vector<long long>result(n,LLONG_MAX);
        vector<int>pathcount(n,0);

        result[0]=0;
        pathcount[0]=1;
        pq.push({0,0}); //{time,node}

        while(!pq.empty()){
            long long currTime=pq.top().first;
            int currNode=pq.top().second;
        pq.pop();

        for(auto &vec:adj[currNode]){
            int ngbr=vec.first;
            int roadtime=vec.second;

            if(currTime + roadtime <result[ngbr]){
                result[ngbr]=currTime + roadtime;
                pq.push({result[ngbr],ngbr});
                pathcount[ngbr]=pathcount[currNode];
            }
            else if(currTime + roadtime==result[ngbr]){
                pathcount[ngbr]=(pathcount[ngbr]+pathcount[currNode])%M;
            }
        }    
        }
        return pathcount[n-1];
    }
};