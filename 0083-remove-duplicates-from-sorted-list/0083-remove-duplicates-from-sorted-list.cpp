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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* check = head;
        ListNode* after = NULL;
        if(head != NULL && head -> next != NULL){
        after = head->next;
        }
        else{
            return head;
        }


        while( after != NULL ){
            if(after != NULL && head->val != after->val){
                head->next = after;
                head = after;
                after = after -> next;
            }
            
            if(after != NULL && head->val == after->val){
            after = after -> next;
            }
          
        }

        head -> next = NULL;
        

        return check;
    }
};