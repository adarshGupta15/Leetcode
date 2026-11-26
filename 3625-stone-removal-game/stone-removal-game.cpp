class Solution {
public:
    bool canAliceWin(int n) {
        int take=10;
        bool aliceTurn=true;
        while(take>0){
            if(n<take){
                return !aliceTurn;
            }
            n-=take;
            take--;
            aliceTurn=!aliceTurn;
        }
        return false;
    }
};