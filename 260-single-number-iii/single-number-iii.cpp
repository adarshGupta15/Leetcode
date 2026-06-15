class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     /*int n=nums.size();
     map<int,int>mpp;
     for(int i=0;i<n;i++){
        mpp[nums[i]]++;
     }   
     vector<int>ans;
     for(auto it:mpp){
        if(it.second==1){
            ans.push_back(it.first);
        }
     }
     return ans;*/
     long long XORR=0;
     int n=nums.size();
     for(int i=0;i<n;i++){
        XORR=XORR^nums[i];
     }
     int rightmost=(XORR & -(XORR));
     int b1=0,b2=0;
     for(int i=0;i<n;i++){
        if(nums[i] & rightmost){
            b1=b1^nums[i];
        }
        else{
            b2=b2^nums[i];
        }
     }
     return {b1,b2};
    }
};