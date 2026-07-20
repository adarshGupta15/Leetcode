class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        if((start[0]%2==start[1]%2 && target[0]%2==target[1]%2)||(start[0]%2!=start[1]%2 && target[0]%2!=target[1]%2))
        return true;
        return false;
    }
};