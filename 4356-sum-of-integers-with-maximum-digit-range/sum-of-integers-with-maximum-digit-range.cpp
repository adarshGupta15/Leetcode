class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int>range;
        int maxrange=0;
        // First Pass:Calculate digit range of every no
        for(int num:nums){
            int maxi=0,mini=9;
            string s=to_string(num);

        for(char ch:s){
            int digit=ch-'0';
            maxi=max(maxi,digit);
            mini=min(mini,digit);

        }   
        int diff=maxi-mini;
        range.push_back(diff);
        maxrange=max(maxrange,diff); 
        }
        // second pass: sum numbers having maximum digit range
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(range[i]==maxrange)
                sum+=nums[i];
        }
        return sum;
    }
};