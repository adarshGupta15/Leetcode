class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         vector<int>temp=nums;
     int n=nums.size();
    vector<int>arr1(n);
    arr1[0]=0;
    vector<int>arr2(n);
    vector<int>ans(n);
    for(int i=1;i<n;i++){
       arr1[i]=arr1[i-1]+nums[i-1];
    }
    reverse(temp.begin(),temp.end());
     arr2[0]=0;
    for(int i=1;i<n;i++){
       arr2[i]=arr2[i-1]+temp[i-1];
    }
     reverse(arr2.begin(),arr2.end());
    for(int i=0;i<n;i++){
        ans[i]=abs(arr1[i]-arr2[i]);
    }
    return ans;
    }
};