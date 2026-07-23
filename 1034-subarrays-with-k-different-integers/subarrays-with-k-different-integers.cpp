class Solution {
public:
    int slidingwindow(vector<int>&nums,int k){
        unordered_map<int,int>mp;
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        while(j<n){
            mp[nums[j]]++;
            while(mp.size()>k){
                // shrink the window
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }    
            i++;
            }
            count+=(i-j+1);
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return -(slidingwindow(nums,k) - slidingwindow(nums,k-1));
    }
};