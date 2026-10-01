class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int maxi = 0;
        for (auto x : s) {
            if (s.find(x - 1) == s.end()) {
                int count = 1;
                int current = x;
                while (s.find(current + 1) != s.end()) {
                    current++;
                    count++;
                }
                maxi = max(maxi, count);
            }
        }
    
        return maxi;
    }
    };