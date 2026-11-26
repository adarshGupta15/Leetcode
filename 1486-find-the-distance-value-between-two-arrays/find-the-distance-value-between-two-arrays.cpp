class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int x:arr1){
            int idx=lower_bound(arr2.begin(),arr2.end(),x-d)-arr2.begin();
            if(idx==arr2.size() || arr2[idx]>x+d) count++;
        }

        
        return count;
    }
};