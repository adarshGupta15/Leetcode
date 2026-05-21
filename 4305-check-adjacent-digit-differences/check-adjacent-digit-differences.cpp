class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size();
        bool temp=true;
        for(int i=0;i<n-1;i++){
            if(abs(s[i+1]-s[i])>2){
               temp=false;
            }
        }
        if(temp==true) return true;
        else return false;
    }
};