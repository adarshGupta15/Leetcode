class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
       
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[bulbs[i]]++;
        }
        vector<int> arr;
        for( auto it:freq){
            if(it.second%2!=0){
                arr.push_back(it.first);
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};