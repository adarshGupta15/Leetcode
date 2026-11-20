class Solution {
public:
    string digitSum(string s, int k) {
        while(s.size()>k){
            string temp="";
            for(int i=0;i<s.size();i+=k){
                string group=s.substr(i,k);
                int sum=0;
                for(char ch:group){
                    sum+=ch-'0';
                }
                temp+=to_string(sum);
            }
            s=temp;
        }
        return s;
    }
};