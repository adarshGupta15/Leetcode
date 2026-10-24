class Solution {
public:
   vector<int> maxPrimes(int n, int s) {
    vector<bool>isPrime(n+1,true);
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
    
        vector<int>prime;
        for(int i=2;i<=n;i++){
            if(isPrime[i]){
                prime.push_back(i);
            }
        }
        vector<int>ans;
        long long sum=0;
       
    for(int i=0;i<prime.size();i++){
        if(sum+prime[i]<=s){
            sum+=prime[i];
            ans.push_back(prime[i]);
        }
        else{
            break;
        }
    }
    return ans;
    }
};