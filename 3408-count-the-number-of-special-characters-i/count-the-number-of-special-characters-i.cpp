class Solution {
public:
    int numberOfSpecialChars(string word) {
        int freq[123]={0};
        for(char ch:word){
            freq[ch]++;
        }
        int count=0;
        for(int i=97;i<=122;i++){
            int capitalindex=i-32;

            if(freq[i]>0 && freq[capitalindex]>0) count++;
        }
        return count;
    }
};