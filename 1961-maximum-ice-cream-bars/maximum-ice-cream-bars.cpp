class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
            if(costs[i]<=coins){
                 coins-=costs[i];
                 count++;
            }
        }
       /* for(int j=n-1;j>0;j--){
            if(costs[j]<=coins){
                coins-=costs[j];
                count++;
            }
        }*/
        return count;
    }
};