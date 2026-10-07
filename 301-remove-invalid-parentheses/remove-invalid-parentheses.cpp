class Solution {
public:
    vector<string>res;
    unordered_map<string,int>mp;
    int getmininvalid(string s){
        stack<char>stck;
        int i=0;
        while(i<s.size()){
            if(s[i]=='(')
                stck.push('(');
            else if(s[i]==')'){
                if(stck.size()>0 && stck.top()=='(')
                    stck.pop();
                else 
                    stck.push(')');    
            }
            i++;    
        }
        return stck.size();
    }
    void solve(string s,int mininv){
        if(mp[s]!=0)
            return;
        else
            mp[s]++;
        // base case
        if(mininv<0){
            return;
        }        
        if(mininv==0){
            if(!getmininvalid(s))
                res.push_back(s);
            return;    
        }
        for(int i=0;i<s.size();i++){
            string left=s.substr(0,i);
            string right=s.substr(i+1);
            solve(left+right,mininv-1);
        }
        return;
    }
    vector<string> removeInvalidParentheses(string s) {
        solve(s,getmininvalid(s));
        return res;
    }
};