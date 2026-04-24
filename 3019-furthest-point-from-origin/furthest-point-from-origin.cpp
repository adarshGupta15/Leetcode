class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int l=0;
        int r=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L' ){
                l++;
            }
            if(moves[i]=='R'){
                r++;
            }
            if(moves[i]=='_') b++;
        }
        int ans=(abs(l-r)+b);
        return ans;
    }
};