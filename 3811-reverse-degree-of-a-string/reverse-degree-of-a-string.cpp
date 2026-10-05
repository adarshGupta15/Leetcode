class Solution {
public:
    int reverseDegree(string s) {
        int pro=0;
        for(int i=0;i<s.size();i++){
            int a=26-(s[i]-'a');
            pro=pro+(i+1)*a;
        }
        return pro;
    }
};