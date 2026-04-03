class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n= nums.size();
        int p1=0;
        int p2=0;
       bool FirstActive=true;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                FirstActive=!FirstActive;
            }
            if(i%6==5){
                 FirstActive=!FirstActive;
            }
            if( FirstActive){
                p1=p1+nums[i];
            }
            else{
                 p2=p2+nums[i];
            }
        }

        int ans=p1-p2;
        return ans;
    }
};