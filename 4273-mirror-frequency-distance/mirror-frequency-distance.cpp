class Solution {
public:
    int mirrorFrequency(string s) {
        
        vector<int> freq(128, 0);
        
        for(char c : s){
            freq[c]++;
        }

        int ans = 0;

        // letters
        for(char c = 'a'; c <= 'z'; c++){
            char m = 'z' - (c - 'a');

            if(c <= m){ // avoid double counting
                ans += abs(freq[c] - freq[m]);
            }
        }

        // digits
        for(char c = '0'; c <= '9'; c++){
            char m = '9' - (c - '0');

            if(c <= m){ // avoid double counting
                ans += abs(freq[c] - freq[m]);
            }
        }

        return ans;
    }
};