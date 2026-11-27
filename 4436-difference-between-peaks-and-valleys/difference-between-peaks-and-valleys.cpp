class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n=nums.size();
        int peaksum=0;
        int valleysum=0;
        for(int i=1;i<n-1;i++){
           if(nums[i-1]<nums[i] && nums[i]>nums[i+1]) peaksum+=nums[i];
           if(nums[i-1]>nums[i] && nums[i]<nums[i+1]) valleysum+=nums[i];
        }
        return peaksum-valleysum;
    }
};