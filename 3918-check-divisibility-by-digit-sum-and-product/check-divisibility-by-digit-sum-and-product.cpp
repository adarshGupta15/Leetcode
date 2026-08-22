class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            int digit=s[i]-'0';
            sum=(digit+sum);
            product=(product*digit);
        }

        int total=(sum+product);
        return n % total==0;
    }
};