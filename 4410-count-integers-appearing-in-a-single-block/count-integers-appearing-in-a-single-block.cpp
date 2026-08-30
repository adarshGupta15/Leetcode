class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        //len==freq
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int n=nums.size();
        int ans=0;
        int l=1;
        for(int i=1;i<=n;i++){
            if(i<n and nums[i-1]==nums[i]) l++;
            else{
                if(l==mp[nums[i-1]]) ans++;
                l=1;
            }
        }
        return ans;
    }
};