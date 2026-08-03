class Solution {
public:
    int romanToInt(string s) {
        int n= s.size();
        long long ans=0;
        unordered_map<char,int>value;
        value['I']=1;
        value['V']=5;
        value['X']=10;
        value['L']=50;
        value['C']=100;
        value['D']=500;
        value['M']=1000;
        for(int i=0;i<n-1;i++){
            if(value[s[i]] < value[s[i+1]]){
              ans-=value[s[i]];
            }
            else{
                ans+=value[s[i]];
            }
        }
        ans+=value[s[n-1]];
    return ans;
}
};