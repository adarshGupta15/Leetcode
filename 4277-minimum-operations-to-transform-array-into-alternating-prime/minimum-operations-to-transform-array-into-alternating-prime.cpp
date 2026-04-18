class Solution {
public:
    bool isprime(int x) {
        if (x < 2)
            return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            // even index
            if (i % 2 == 0) {
                while (!isprime(val)) {
                    val++;
                    count++;
                }
            } else {
                while (isprime(val)) {
                    val++;
                    count++;
                }
            }
        }
            return count;
    }
    };