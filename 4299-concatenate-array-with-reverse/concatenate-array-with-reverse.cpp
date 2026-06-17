class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n= nums.size();
        vector<int>rev;
        vector<int>result;
        for(int i=n-1;i>=0;i--){
         rev.push_back(nums[i]);
    }
    for(int i=0;i<n;i++){
        result.push_back(nums[i]);
       }
       for(int i=0;i<n;i++){
        result.push_back(rev[i]);
       }
    return result;
    }

};
