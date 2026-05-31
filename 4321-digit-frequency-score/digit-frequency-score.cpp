class Solution {
public:
    int digitFrequencyScore(long long  n) {
        long long  sum=0;
        long long  temp;
        while(n>0){
        temp=n%10;
        sum=sum+temp;
         n=n/10;
        }
       
        return sum;
    }
};