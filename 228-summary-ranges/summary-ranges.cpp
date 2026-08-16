class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        int start=0;
        for(int i=1;i<=n;i++){
           if(i==n || nums[i]!=nums[i-1]+1){
            if(start==i-1){
                ans.push_back(to_string(nums[start]));
            }
            else{
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i-1]));
            }
            start=i;
           }
        }
        return ans;
    }
};