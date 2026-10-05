class Solution {
public:
    int reverseDegree(string s) {

        int pro = 0;

        vector<int> val{26,25,24,23,22,21,20,19,18,17,16,15,14,
                        13,12,11,10,9,8,7,6,5,4,3,2,1};

        vector<char> alp{'a','b','c','d','e','f','g','h','i','j','k','l','m',
                         'n','o','p','q','r','s','t','u','v','w','x','y','z'};

        for(int i = 0; i < s.size(); i++) {

            for(int j = 0; j < 26; j++) {
                if(s[i] == alp[j]) {
                    pro += (i+1) * val[j];
                    break;
                }
            }
        }

        return pro;
    }
};