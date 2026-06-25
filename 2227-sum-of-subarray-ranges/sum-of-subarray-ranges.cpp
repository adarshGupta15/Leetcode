class Solution {
public:
    void findnge(vector<int> &nge, vector<int>& nums, int n) {
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);
        }
    }

    void findnse(vector<int> &nse, vector<int>& nums, int n) {
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
    }

    void findpsee(vector<int> &psee, vector<int>& nums, int n) {
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            psee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
    }

    void findpgee(vector<int> &pgee, vector<int>& nums, int n) {
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) {  // Fix: Use `>=` for PGEE
                st.pop();
            }
            pgee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
    }

    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n), pgee(n), nse(n), psee(n);
        findnge(nge, nums, n);
        findpgee(pgee, nums, n);
        findnse(nse, nums, n);
        findpsee(psee, nums, n);

        long long sum_max = 0, sum_min = 0;
        for (int i = 0; i < n; i++) {
            int leftm = i - psee[i];
            int rightm = nse[i] - i;  // Fix: Use `nse` instead of `nge`
            sum_min += (leftm * rightm * 1LL * nums[i]);

            int leftM = i - pgee[i];
            int rightM = nge[i] - i;
            sum_max += (leftM * rightM * 1LL * nums[i]);
        }
        return sum_max - sum_min;
    }
};