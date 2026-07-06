class Solution {
    int greatest(int n){
      int  x=abs(n);
        int mx=0;
        while(x>0){
            mx=max(mx,x%10);
            x/=10;
        }
        return mx;
    }
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
       vector< int >rem(n);
        int ans=-1;
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
           if(greatest(nums[i])==greatest(nums[j]))
           ans=max(ans,nums[i]+nums[j]);
           }
        }
       return ans; 
    }
};