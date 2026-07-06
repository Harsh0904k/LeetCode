/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> node;
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA != nullptr){
            node[tempA]++;
            tempA = tempA -> next;
        }
        while(tempB != nullptr){
            node[tempB]++;

             if(node[tempB]>1){
                     return tempB;
            }
            tempB = tempB -> next;    
        }
        return NULL;
    }
};