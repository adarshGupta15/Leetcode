class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        vector<double>a;
        int m= prices.size();
        int n=discounts.size();
        sort(prices.begin(),prices.end(),greater<>());
        sort(discounts.begin(),discounts.end(),greater<>());
    
       int k=min(m,n);
       double sum=0;
       for(int i=0;i<k;i++){
        sum+=prices[i]*(100-discounts[i])/100.0;
       }
       for(int i=k;i<m;i++){
        sum+=prices[i];
       }
       return sum;
    }
};