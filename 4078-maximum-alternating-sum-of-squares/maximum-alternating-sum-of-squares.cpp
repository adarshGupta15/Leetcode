class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),[](int a,int b){
            return abs(a)>abs(b);
        });
          long long upper=0;
          long long lower=0;
          long long ans=0;
       
            if(n%2==0){
                  for(int i=0;i<n/2;i++){
                     upper+=1LL*nums[i]*nums[i];
                  }
                  for(int i=n/2;i<n;i++){
                    lower+=1LL*nums[i]*nums[i];
                  }
                 ans=upper-lower;
        }
         else{
                  for(int i=0;i<n/2+1;i++){
                     upper+=1LL*nums[i]*nums[i];
                  }
                  for(int i=n/2+1;i<n;i++){
                    lower+=1LL*nums[i]*nums[i];
                  }
                 ans=upper-lower;
        }
        return ans;
    }
};