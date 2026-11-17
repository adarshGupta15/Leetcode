class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            int mn=nums[i];
            int And=nums[i];

            for(int j=i;j<n;j++){
                mn=min(mn,nums[j]);
                And &=nums[j];
                if(And==mn) ans++;
            }
        }
        return ans;
    }
};