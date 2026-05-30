class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        long long sum=0;
        float avg;
        for(int i=0;i<n;i++){
           sum=sum+nums[i];
        }
        for(int i=0;i<n-1;i++){
            sum=sum-nums[i];
            avg=sum/(n-i-1);
            if(nums[i]>avg)
            count++;
        }
        return count;
    }
};