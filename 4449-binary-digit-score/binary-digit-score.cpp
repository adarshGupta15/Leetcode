class Solution {
public:
    int calculateScore(int a, int b) {
        string s1=bitset<32>(a).to_string();
        string s2=bitset<32>(b).to_string();

        int countA=0;
        int countB=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='1') countA++;
        }
        for(int i=0;i<s2.size();i++){
            if(s2[i]=='1') countB++;
        }

        if(countA >= countB)  return countA*countB;
        else {
            return countB/countA;
        }
    }
};