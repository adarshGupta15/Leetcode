class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<string>st;
        string curr="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(curr);
                curr="";
            }

            else if(s[i]==')'){
                reverse(curr.begin(),curr.end());
                string temp=st.top();
                st.pop();
                curr = temp + curr;
            }

            else{
                curr+=s[i];
            }
        }
        return curr;
    }
};