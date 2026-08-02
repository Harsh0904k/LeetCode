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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* n = head;
        int count = 1;
        if(head==nullptr || head->next == nullptr || k==0){
            return head;
        }
        while(n->next != nullptr){
            n = n->next;
            count++;
        }
        
        k = k%count;

        while(k!=0){
        while(temp->next != nullptr && temp -> next ->next != nullptr){
                temp = temp->next;
        }
        if(temp->next != 0){
            temp -> next -> next = head;
            head = temp->next;
            temp->next = nullptr;
            temp = head;
            k--;
            }
        }
        return head;
    }
};