class Solution {
public:
    int minLights(vector<int>& lights) {
        int n=lights.size();
        vector<int>illuminated(n);
        for(int i=0;i<n;i++){
            if(lights[i]==0) continue;
            int l=max(i-lights[i],0);
          int   r=min(i+lights[i],n-1);
            illuminated[l]++;
            if(r+1<n)
            illuminated[r+1]--;
        }
        for(int i=1;i<n;i++){
            illuminated[i]+=illuminated[i-1];
        }
        vector<int>dark;
        int tail=0,head=-1;
        int ans=0;
        while(tail<n){
            while(head+1<n && illuminated[head+1]==0){
                head++;
            }
            int len=head-tail +1;
            if(head>=tail){
                ans+=(len+3-1)/3;
                tail=head+1;
                head=tail-1;
            }
            else{
                tail++;
                head=tail-1;
            }
        }
        return ans;
    }
    };