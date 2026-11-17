class Solution {
public:
    vector<int> nums1;
    long long dp[100005][2];
    bool vis[100005][2];
    int n;

    long long solve(int i, int turn) {
        if (i >= n) return 0;

        if (vis[i][turn])
            return dp[i][turn];

        vis[i][turn] = true;

        if (turn == 0) { // Alice
            long long ans = LLONG_MIN;

            // take one
            {
                long long s = nums1[i];
                int nxtTurn = (s % 3 == 0) ? 1 : 0;
                ans = max(ans, s + solve(i + 1, nxtTurn));
            }

            // take two
            if (i + 1 < n) {
                long long s = nums1[i] + nums1[i + 1];
                int nxtTurn = (s % 3 == 0) ? 1 : 0;
                ans = max(ans, s + solve(i + 2, nxtTurn));
            }

            return dp[i][turn] = ans;
        }
        else { // Bob
            long long ans = LLONG_MAX;

            // take one
            {
                long long s = nums1[i];
                int nxtTurn = (s % 3 == 0) ? 0 : 1;
                ans = min(ans, -s + solve(i + 1, nxtTurn));
            }

            // take two
            if (i + 1 < n) {
                long long s = nums1[i] + nums1[i + 1];
                int nxtTurn = (s % 3 == 0) ? 0 : 1;
                ans = min(ans, -s + solve(i + 2, nxtTurn));
            }

            return dp[i][turn] = ans;
        }
    }

    long long maxDifference(vector<int>& nums) {
        nums1 = nums;   // IMPORTANT
        n = nums.size();

        memset(vis, 0, sizeof(vis));

        return solve(0, 0);
    }
};