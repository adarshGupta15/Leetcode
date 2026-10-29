class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        vector<int>gains;
        long long sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            string s=to_string(nums[i]);
            sort(s.begin(),s.end(),greater<char>());

            int newNum=stoi(s);
            gains.push_back(newNum-nums[i]);
        }
        sort(gains.begin(),gains.end(),greater<int>());
        for(int i=0;i<k;i++){
            sum+=gains[i];
        }
        return sum;
    }
};