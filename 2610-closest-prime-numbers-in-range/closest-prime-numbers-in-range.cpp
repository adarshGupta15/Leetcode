class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isprime(right+1,true);
        isprime[0]=isprime[1]=false;

        //sieve algo
        for(int i=2;i*i<=right;i++){
            if(isprime[i]){
                for(int j=i*i;j<=right;j+=i){
                  isprime[j]=false;
                }
            }
        }
        vector<int>primes;
        for(int i=left;i<=right;i++){
            if(isprime[i]){
                primes.push_back(i);
            }
        }
        // Closest
        int mindiff=INT_MAX;
        vector<int>ans={-1,-1};
        for(int i=1;i<primes.size();i++){
            if(primes[i]-primes[i-1]<mindiff){
                mindiff=primes[i]-primes[i-1];
                ans={primes[i-1],primes[i]};
            }
        }
        return ans;
    }
};