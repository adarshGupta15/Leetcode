class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        int n=costs.size();
        vector<pair<int,int>>machines;
        for(int i=0;i<n;i++){
            machines.push_back({costs[i],capacity[i]});
        }
        sort(machines.begin(),machines.end());
        int ans=0;
        //case1:jab ek bar mil jaye 
        for(auto &m:machines){
            if(m.first < budget){
                ans=max(ans,m.second);
            }
        }
        //prefix max capacity
        vector<int>prefixMax(n);
        prefixMax[0]=machines[0].second;
        for(int i=1 ;i<n;i++){
            prefixMax[i]=max(prefixMax[i-1],machines[i].second);
        }
        // case2(jab 2 bar mae mila hoo) yeh accha part hain
        for(int j=1;j<n;j++){
            int remaining=budget-machines[j].first;
            int i=upper_bound(machines.begin(),machines.begin()+j,make_pair(remaining-1,INT_MAX))-machines.begin()-1;
            if(i>=0){
                ans=max(ans,machines[j].second+prefixMax[i]);
            }
        }
      return ans;
    }
};