class Solution {
public:
    bool isPalindromic(string s) {
        string binarystr="";
        for(char c:s){
            binarystr += bitset<8>(c).to_string();

        }
        int l=0;
        int r=binarystr.size()-1;
        while(l<r){
            if(binarystr[l]!=binarystr[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};