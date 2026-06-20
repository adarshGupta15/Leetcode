class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        map<char,int>freq;
         map<char,int>freq_r;
        for(int i=0;i<m;i++){
            freq[magazine[i]]++;
        }
            for(int i=0;i<n;i++){
            freq_r[ransomNote[i]]++;
        }
        for(auto it:freq_r){
        if((it.second>freq[it.first])){
            return false;
        }
    }
         return true;
}
};