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
    int minSwaps(vector<int>& nums) {
      int n=nums.size();
      vector<pair<pair<int,int>,int>>arr;
      for(int i=0;i<n;i++){
        arr.push_back({{digit(nums[i]),nums[i]},i});
      }
      sort(arr.begin(),arr.end());
      vector<bool>visited(n,false);
      int swaps=0;
      for(int i=0;i<n;i++){
        if(visited[i] || arr[i].second==i)
        continue;
        int cycle_size=0;
        int j=i;
        while(!visited[j]){
            visited[j]=true;
            j=arr[j].second;
            cycle_size++;
        }
        if(cycle_size>1)
        swaps+=(cycle_size-1);
      }
      return swaps;
    }
};