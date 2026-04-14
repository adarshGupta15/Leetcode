class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>&candidates,int target,vector<int>&temp,int idx,vector<vector<int>>&result){
        if(target<0) return;// jab negative value annae lagaega 
     if(target==0){
      result.push_back(temp);
      return;
     }

     for(int i=idx;i<candidates.size();i++){
        if(i>idx && candidates[i]==candidates[i-1]){
            continue;
        }
     
     temp.push_back(candidates[i]);//DO
     solve(candidates,target-candidates[i],temp,i+1,result);//EXPLORE

     temp.pop_back();//UNDO
     
    }
    }




    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        sort(begin(candidates),end(candidates));
        solve(candidates,target,temp,0,result);
        return result;
    }
};