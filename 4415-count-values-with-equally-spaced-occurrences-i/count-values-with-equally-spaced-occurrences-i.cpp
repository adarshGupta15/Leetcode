class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>pos;
        for(int i=0;i<nums.size();i++){
            pos[nums[i]].push_back(i);
        }
        int count=0;
        for(auto &it:pos){
            vector<int>v=it.second;

            if(v.size()==3){
                if(v[1]-v[0]==v[2]-v[1]){
                    count++;
                }
            }
        }
        return count;
    }
};