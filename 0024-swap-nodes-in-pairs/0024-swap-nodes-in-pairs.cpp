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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = nullptr;
        if(head==nullptr || head->next == nullptr){
            return head;
        }
        else if(head->next->next == nullptr){
            temp = head;
            head = head->next;
            head->next = temp;
            temp->next = nullptr;
            return head;
        }
        else{
        temp = head->next;
        head->next = head->next->next;
        temp->next = head;
        head = temp;
        temp = temp ->next;
        }
        while(temp!=nullptr && temp->next != nullptr && temp->next->next != nullptr){
            ListNode* after = temp->next;
            temp->next = temp->next->next;
            after->next = after->next->next;
            temp->next->next = after;
            temp = temp->next->next;
        }
    return head;
    }
};