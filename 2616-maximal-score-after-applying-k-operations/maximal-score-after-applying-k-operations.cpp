class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0;
        priority_queue<int>pq;// max heap
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(k>0){
            int x=pq.top();
            ans+=x;
            
            pq.pop();
            pq.push((x + 2) / 3);
            k--;
        }
        return ans;
    }
};