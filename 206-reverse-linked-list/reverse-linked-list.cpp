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
    ListNode* reverseList(ListNode* head) {
        // Approach 1

        // ListNode* temp=head;
        // vector<int> ans;
        // while(temp!=NULL){
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // int i=ans.size()-1;
        // while(temp!=NULL){
        //     temp->val=ans[i];
        //     temp=temp->next;
        //     i--;
        // }
        // return head;

        // Approach 2
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* future=NULL;
        while(curr!=NULL){
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        head=prev;
        return head;
    }
};