class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }

    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd(n);

        int mxi = 0;


        for(int i = 0; i < n; i++){
            mxi = max(mxi, nums[i]);   
            prefixGcd[i] = gcd(nums[i], mxi);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        //  pairing
        long long ans = 0;
        int l = 0, r = n - 1;

        while(l < r){
            ans += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }

        return ans;
    }
};;