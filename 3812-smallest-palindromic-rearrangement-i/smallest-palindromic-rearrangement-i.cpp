class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
        vector<int>freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        string half="";
        string mid="";

        for(int i=0;i<26;i++){
            if(freq[i]%2==1 && mid==""){
                mid.push_back('a'+i);
            }
            half+=string(freq[i]/2,'a'+i);
        }
        string rev=half;
        reverse(rev.begin(),rev.end());
        return half+mid+rev;
    }
};