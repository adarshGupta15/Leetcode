class Solution {
    private:
        bool check(vector<int>digits,int num){
            int a=num/100;
            int b=(num/10)%10;
            int c=num%10;
            int arr[]={a,b,c};
            for(int i=0;i<3;i++){
                bool found=false;
                for(int j=0;j<digits.size();j++){
                    if(digits[j]==arr[i]){
                        digits[j]=-1;
                        found=true;
                        break;
                    }
                }
                if(!found)
                       return false;
            }
            return true;
        }
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>a;
        for(int i=100;i<=999;i++){
            if(i%2!=0 ){
                continue;
            }
            if(check(digits,i))
              a.push_back(i);
        }
        return a;
    }
};