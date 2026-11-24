class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        for(long long i=0;i<n;i++){
            __int128 pro=1;
            long long g=0;
            long long l=1;
            for(long long j=i;j<n;j++){
                 if(pro > LLONG_MAX / nums[j]) {
                    break;
                }
                pro*=nums[j];
                g=gcd(g,nums[j]);
                l=lcm(l,nums[j]);
                if(pro==g*l){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};