/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) {
        stack<int>s1,s2;
        while(L1){
            s1.push(L1->val);
            L1=L1->next;
            
        }
        while(L2){
            s2.push(L2->val);
            L2=L2->next;
        }
        //int sum=0;
        int carry=0;
        ListNode*ans=NULL;//new ListNode();
        while(!s1.empty() || !s2.empty()|| carry){
            int sum=carry;
            if(!s1.empty()){
                sum+=s1.top();
                s1.pop();
            }
                if(!s2.empty()){
                sum+=s2.top();
                s2.pop();
            }
    
            //ans->val=sum%10;
            //carry=sum/10;
            ListNode*newNode=new ListNode(sum%10);
            newNode->next=ans;
            ans=newNode;
            //sum=carry;
            carry=sum/10;
        }
        return  /*carry==0 ? ans->next */ans;
    }
};