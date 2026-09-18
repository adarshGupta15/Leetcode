class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sr=source[0];
        int sc=source[1];
        int tr=target[0];
        int tc=target[1];

        //souece==target
        if(sr==tr && sc==tc){
            return 0;
        }
        // same diagonal
        if(abs(sr-tr)==abs(sc-tc)) return 1;

        //different color
        if((sr+sc)%2 !=(tr+tc)%2) return -1;

        //same color
        return 2;
    }
};