class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n=nums1.size();
        long long k= (long long)k1+k2;
        int mx=0;

        vector<int>diff(n);
        for(int i=0;i<n;i++){
            diff[i]=abs(nums1[i]-nums2[i]);
            mx=max(mx,diff[i]);
        }
        vector<long long>freq(mx+1,0);
        for(int d:diff){
            freq[d]++;
        }
        for(int d=mx;d>0 && k>0;d--){
            long long count=min(k,freq[d]);

            freq[d]-=count;
            freq[d-1]+=count;
            k-=count;
        }
        long long ans=0;
        for(int d=1;d<=mx;d++){
            ans+=1LL*d*d*freq[d];
        }
        return ans;
    }
};