class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>a;
        for(int i=0;i<n;i++){
            if(a.empty() || a.back()!=nums[i]){
                a.push_back(nums[i]);
            }
            else{
                count++;
            }
        }

    
       return count;
    }
};