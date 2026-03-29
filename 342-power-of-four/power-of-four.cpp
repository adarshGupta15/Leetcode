class Solution {
public:
    bool isPowerOfFour(int n) {
       while(n!=1){
        if(n%4!=0 || n==0){
            return false;
        }
        n=n/4;
       }
       return true;

    }
};