class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>a;
        int n=nums.size();
        unordered_map<int ,int>freq;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
           freq[nums[i]]++;
        }
        for(auto it:freq){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++){
            a.push_back(v[i].second);
        }
        return a;
    }
};