class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n=nums.size();
        int maxproduct=INT_MIN;
        vector<int>ans={-1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j] && nums[i]+nums[j]==target){
                   int product=nums[i]*nums[j];
                    if(product>maxproduct){
                        maxproduct=product;
                        ans={i,j};
                    }
                }
            }
        }
        return ans;
    }
};