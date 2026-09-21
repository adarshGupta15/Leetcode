class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(),pizzas.end());
        int n=pizzas.size();
        int days=n/4;

        int oddDays=(days+1)/2;
        int evenDays=days/2;

        long long ans=0;
        int left=0;
        int right=n-1;

        //oddDays
        for(int i=0;i<oddDays;i++){
            ans+=pizzas[right];
            right--;
            left+=3;
        }



        //evenDays
        for(int i=0;i<evenDays ;i++){
            right--;
            ans+=pizzas[right];
            right--;
            left+=2;
        }

       return ans;
    }
};