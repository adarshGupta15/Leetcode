class Solution {
public:
    int digit(int k){
        int sum=0;
      while(k!=0){
        int temp=k%10;
        sum=sum+temp;
        k=k/10;
      }
      return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(digit(nums[i])==i) return i;
        }
        return -1;
    }
};