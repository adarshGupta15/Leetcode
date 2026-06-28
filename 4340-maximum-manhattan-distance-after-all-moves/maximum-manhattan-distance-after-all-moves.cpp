class Solution {
public:
    int maxDistance(string moves) {
        int x=0;
        int y=0;
        int n=moves.size();
        int maxi=0;
        int ans;
        for(int i=0;i<n;i++){
            if(moves[i]=='U') y=y+1;
            else if(moves[i]=='D') y=y-1;
            else if(moves[i]=='L') x=x-1;
            else if(moves[i]=='R') x=x+1;
            else{
                maxi=maxi+1;
            }
        }
        ans=(maxi+(abs(x)+abs(y)));
        return ans;
    }
};