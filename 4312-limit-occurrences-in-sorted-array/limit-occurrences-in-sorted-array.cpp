class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>freq;
         for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
       
            if(freq[nums[i]]<=k){
                ans.push_back(nums[i]);
            }
        }
     return ans;
    }
};