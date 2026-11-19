
class Solution {
public:
    long long spf(long long x) {
        for(long long p = 2; p*p <= x; p++) {
            if(x % p == 0) return p;
        }
        return x;
    }

    long long minimumMaxValue(int n, int index, int value) {
        long long left = index;
        long long right = n - 1 - index;

        if(value == 1) return -1;

        long long p = spf(value);

        if(left > 0) {
            if(p == value) return -1;

            long long smallest = value - p - 2*(left-1);

            if(smallest <= 0) return -1;
        }

        long long ans = value;

        if(right > 0) {
            ans += p;
            ans += 2*(right-1);
        }

        return ans;
    }
};
