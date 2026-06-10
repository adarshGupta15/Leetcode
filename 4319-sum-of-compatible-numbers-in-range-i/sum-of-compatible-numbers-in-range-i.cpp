class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        long long sum=0;
        for(int i=0;i<100*100;i++){
            if(abs(n-i)<=k && (n&i)==0){
                sum=sum+i;
            }
        }
     return sum;
    }
   
};