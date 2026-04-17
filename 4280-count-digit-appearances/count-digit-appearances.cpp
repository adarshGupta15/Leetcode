class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int count=0;
        vector<int>array;
        vector<int>num(n);
        int s_digit;
       
        for(int i=0;i<n;i++){
              num=nums;
            while(num[i]!=0){
             s_digit=num[i]%10;
             num[i]=num[i]/10;
              array.push_back(s_digit);
            }
        }
       for(int i=0;i<array.size();i++){
        if(array[i]==digit){
            count++;
        }
       }
       return count;
    }
};